#include <stdio.h>
#include <cmath>

int main(void){
    int a, b, c;
    double p, s, ar;
    printf("Ingrese el largo del 1° lado del triangulo\n");
    scanf("%d", &a);

    printf("Ingrese el largo del 2° lado del triangulo\n");
    scanf("%d", &b);
    
    printf("Ingrese el largo del 3° lado del triangulo\n");
    scanf("%d", &c);

    p=a+b+c;;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c))
    printf("Perimetro = %d", p);
}