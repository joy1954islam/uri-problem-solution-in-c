#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf", &a);

    if(a>=0 && a<=2000)
	{
        printf("Isento\n");
	}
    else if(a>=2000.01 && a<=3000)
    {
        a=a-2000;
        b= a*.08;
        printf("R$ %.2lf\n",b);
    }
    else if(a>=3000.01 && a<=4500)
    {
        a=a-3000;
        b= a*.18+80;
        printf("R$ %.2lf\n",b);
    }
    else
    {
        a=a-4500;
        b= a*.28+350;
        printf("R$ %.2lf\n",b);
    }
    return 0;
}
