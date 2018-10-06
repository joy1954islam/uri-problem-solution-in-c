#include <stdio.h>

int main()
{
    int amount;
    int note100, note50, note20, note10, note5, note2, note1;

	note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    scanf("%d", &amount);
	printf("%d\n",amount);

    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }
    printf("%d nota(s) de R$ 100,00\n", note100);
    printf("%d nota(s) de R$ 50,00\n", note50);
    printf("%d nota(s) de R$ 20,00\n", note20);
    printf("%d nota(s) de R$ 10,00\n", note10);
    printf("%d nota(s) de R$ 5,00\n", note5);
    printf("%d nota(s) de R$ 2,00\n", note2);
    printf("%d nota(s) de R$ 1,00\n", note1);

    return 0;
}
