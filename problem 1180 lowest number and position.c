#include <stdio.h>
int main()
{
   int i,N, p, min;
    scanf("%d", &N);
    int X[N];
    for(i=0; i<N; i++)
        scanf("%d", &X[i]);
    min=X[0];
    for(i=1; i<N; i++)
    {
        if(min>X[i])
        {
            min=X[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, p);
    return 0;
}

