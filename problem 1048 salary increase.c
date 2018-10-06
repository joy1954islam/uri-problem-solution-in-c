#include<stdio.h>
int main()
{
	double a,b,c;
    int d;
    char ch='%';
    scanf("%lf", &a);

	if(a>=0 && a<=400)
	{
		b= a*0.15;
		c=a+b;
		d=15;

	}
	else if(a>=400.01 && a<=800.00)
	{
		b=a*0.12;
		c=a+b;
		d=12;
	}
	else if(a>=800.01 && a<=1200.00)
	{
		b=a*0.1;
		c=a+b;
		d=10;
	}
	else if(a>=1200.01 && a<=2000.00)
	{
		b=a*0.07;
		c=a+b;
		d=7;
	}
	else if(a>2000)
	{
		b=a*0.04;
		c=a+b;
		d=4;
	}
	printf("Novo salario: %.2lf\n",c);
    printf("Reajuste ganho: %.2lf\n",b);
    printf("Em percentual: %d %c\n",d,ch);

    return 0;
}
