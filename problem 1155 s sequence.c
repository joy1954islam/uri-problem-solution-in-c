#include<stdio.h>
int main()
{
	float i,m,s=0;

	for(i=1;i<=100;i++)
	{
		m=1/i;
		s=s+m;
	}
	printf("%.2f\n",s);

	return 0;
}
