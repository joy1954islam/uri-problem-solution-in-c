#include<stdio.h>
int main()
{
	int i,n,s=1;

	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		s=s*i;
    }
    printf ("%d\n",s);

    return 0;

}
