#include<stdio.h>
int main()
{
    int a,b,time;
    scanf("%d%d",&a,&b);
    if(a<b)
	{
        time=b-a;
	}
    else
	{
        time=b+24-a;
	}
    printf("O JOGO DUROU %d HORA(S)\n",time);

    return 0;
}
