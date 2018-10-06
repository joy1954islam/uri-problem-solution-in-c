#include<stdio.h>
int main(){
       int num,y,m,d;
       scanf("%d",&num);
       y = num/365;
       m = (num-(y*365))/30;
       d =(num-((y*365)+(m * 30)));
       printf("%d ano(s)\n",y);
       printf("%d mes(es)\n",m);
       printf("%d dia(s)\n",d);

       return 0;
}
