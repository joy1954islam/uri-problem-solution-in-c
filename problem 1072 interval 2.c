#include<stdio.h>
int main()
{
    int n,i,input,in=0,out=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&input);

       if(input>=10 && input<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n",in,out);

    return 0;
}
