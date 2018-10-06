#include<stdio.h>
#include<string.h>

int main()
{
      int i,t,sum;
      char str[10001];
      scanf("%d",&t);

      for(i = 0 ; i<t;i++)
      {
           scanf("%s",str);
           sum = strlen(str);
           printf("%.2f\n",sum/100.0);

      }
      return 0;
}
