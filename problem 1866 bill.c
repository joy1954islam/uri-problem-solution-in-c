#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&s);
        if(s%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
return 0;

}
