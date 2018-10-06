#include<stdio.h>
int main(){
    double a,b,c,triangle,circle,trapezium,square,rectangle,PI=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    triangle=0.5*a*c;
    circle=PI*c*c;
    trapezium=(a+b)/2.0*c;
    square=b*b;
    rectangle=a*b;
    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
    return 0;
}
