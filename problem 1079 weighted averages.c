#include<stdio.h>
int main()
{
	int test;
	float i,a,b,c,average;
	scanf("%d",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%f %f %f",&a,&b,&c);
		average=(a*2.0+b*3.0+c*5.0)/10;
		printf("%.1f\n",average);
	}

	return 0;
}
