#include<stdio.h>
int main(){
	int a,b,c,MaiorAB,maior;
    scanf("%d %d %d",&a,&b,&c);
    MaiorAB=(a+b+abs(a-b))/2;
    maior=(MaiorAB+c+abs(MaiorAB-c))/2;
    printf("%d eh o maior\n",maior);
    return 0;
}
