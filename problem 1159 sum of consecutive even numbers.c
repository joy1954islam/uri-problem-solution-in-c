#include <stdio.h>
int main()
{
int x, a,b=0,sum=0;
while(1)
{
    scanf("%d",&x);
    b=0;
    sum=0;
    if(x==0)
    {
        break;
    }
    if(x%2!=0)
       x++;

    for(a=0;a<5;a++)
    {
        sum=sum+x;
        x=x+2;
    }
    printf("%d\n",sum);
}
    return 0;
}


