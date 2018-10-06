#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);

    d=a+b+c;

    if(d>=24)
    {
        d=d-24;

    }
    if(d<0)
    {
        d=24+d;

    }
     printf("%d\n",d);
    return 0;
}
