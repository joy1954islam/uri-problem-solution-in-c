#include<stdio.h>
int main(){
 	float A,B;
 	float Average;
 	scanf("%f %f",&A,&B);
 	A = A*3.5;
 	B = B*7.5;
 	Average=(A+B)/(3.5+7.5);
 	printf("MEDIA = %.5f\n", Average);
 	return 0;
 }
