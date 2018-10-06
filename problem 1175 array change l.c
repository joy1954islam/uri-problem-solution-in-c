
#include<stdio.h>
int main()
{
	int N[20], i,z;

	for(i=0;i<20;i++)
	{
		scanf("%d",&N[i]);
	}
	for(i=19, z=0; i>=0; i--)
	{
		printf("N[%d] = %d\n",z,N[i]);
		z++;
		if(z==20)
			break;
	}
	return 0;
}
