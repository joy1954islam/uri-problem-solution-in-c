#include<stdio.h>
int main()
{
	 int N[1000],i,z,n;

	 scanf("%d",&n);

	 for(i=0 , z=0 ;  i<1000;i++)
	 {
	 	printf("N[%d] = %d\n",i,z);
	 	z++;
	 	if(z==n)
		{
			z=0;
		}
	 }
	 return 0;
}
