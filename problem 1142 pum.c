#include<stdio.h>
int main(){

        int N, i, j;

        scanf("%d", &N);
        for (i = 1; i <= (4*N - 1); i+=4) {
            for (j = i; j <= i+2; j++) {
                printf("%d ", j);
            }
            printf("PUM\n");
        }
     return 0;
}

