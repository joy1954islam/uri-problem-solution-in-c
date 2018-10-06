#include<stdio.h>
int main()
{
	 double x1,x2,y1,y2,x,y,temp,distance;
	 scanf("%lf %lf",&x1,&y1);
	 scanf("%lf %lf",&x2,&y2);
	 x = x2-x1;
	 y = y2-y1;
	 temp =x*x + y*y;
	 distance=sqrt(temp);
	 printf("%.4lf\n",distance);
	 return 0;
}
