#include<stdio.h>
int main()
{
    double time,speed,fuel;
    scanf("%lf %lf",&time,&speed);
	fuel=(time*speed)/12.0;
	printf("%.3lf\n",fuel);
    return 0;
}
