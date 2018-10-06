#include<stdio.h>
int main()
{
	int i,j=0,loc=0,n;
	for(i=1;i<=100;i++)
	{
		scanf("%d",& n);
		if(n>j)
		{
			j=n;
			loc=i;
		}
	}
	printf("%d\n%d\n",j,loc);

	return 0;
}

