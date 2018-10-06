#include<stdio.h>
int main()
{
	int i,h,m,s,n;
	scanf("%d",&n);
	h=n/3600;
	m=n%3600/60;
	s=n%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
