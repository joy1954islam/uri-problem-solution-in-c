#include<stdio.h>
int main(){
    int i,count=0;
    float n,Average,sum=0.0;
    for(i=1;i<=6;i++)
	{
        scanf("%f",&n);
        if(n>0)
		{
			sum+=n;
            count++;

        }
        Average=sum/(float)count;
	}
    printf("%d valores positivos\n",count);
    printf("%.1f\n",Average);
    return 0;
}
