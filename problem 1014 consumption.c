#include<stdio.h>
int main()
{
	double distance,fuel,average;
    scanf("%lf%lf",&distance,&fuel);
    {
        average=distance/fuel;

        printf("%.3lf km/l\n",average);
    }
	return 0;
}
