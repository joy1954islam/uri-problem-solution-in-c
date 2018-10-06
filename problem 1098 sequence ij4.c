#include<stdio.h>
int main()
{
	 float I,J;
	 int B,A;

	 for(I=0.0;I<2.1;I=I+0.2)
	 {
	 	for(J=1;J<=3.0;J++)
		{
			if(I>0 && I<1 || I>1 && I<2 )
			{
			    printf("I=%.1f J=%.1f\n",I,I+J);
			}
			else
			{
				A=I;
				B=I+J;
				printf("I=%d J=%d\n",A,B);
			}
		}
	 }
	 return 0;
}
