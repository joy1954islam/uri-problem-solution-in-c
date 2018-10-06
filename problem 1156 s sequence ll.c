#include<stdio.h>
int main()
{
	float i,m,b=1,s=0;

	for(i=1;i<=39;i+=2)
	{
		m=i/b;
		s=s+m;
		b=b*2;
	}
	printf("%.2f\n",s);

	return 0;
}


