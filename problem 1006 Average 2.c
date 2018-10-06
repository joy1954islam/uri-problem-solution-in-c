#include<stdio.h>
int main()
{
	float A,B,C;
	float Average;
	scanf("%f %f %f",&A,&B,&C);
	A=A*2;
	B=B*3;
	C=C*5;
	Average=(A+B+C)/10;
	printf("MEDIA = %.1f\n",Average);
	return 0;
}
