#include<stdio.h>
int main(){
    int i,count=0;
    float n;
    for(i=1;i<=6;i++){
        scanf("%f",&n);
        if(n>0)
            count++;
        }
    printf("%d valores positivos\n",count);
    return 0;
}
