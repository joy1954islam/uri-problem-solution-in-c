#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	i=0;
	while(i<6)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);
			i++;
		}
		n++;
	}
	return 0;
}
