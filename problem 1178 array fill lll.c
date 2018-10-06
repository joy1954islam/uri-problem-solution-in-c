#include<stdio.h>
int main()
{
	int N[100],i,n=0;
	double v;

	scanf("%lf",&v);

	for(i=0;i<100;i++)
	{
		N[i] = v;
		printf("N[%d] = %.4lf\n",i,v);
		v=v/2;
	}
	return 0;
}
