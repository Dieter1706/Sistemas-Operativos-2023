#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;

    printf("Ingrese el largo del 1° lado del triangulo\n");
    scanf("%d", &a);

    printf("Ingrese el largo del 2° lado del triangulo\n");
    scanf("%d", &b);
    
    printf("Ingrese el largo del 3° lado del triangulo\n");
    scanf("%d", &c);

    if (a==b){
        if (a==c){
            printf("El triangulo es Equilatero");
        }else{
            printf("El triangulo es Isosceles");
        }
    }else if (a==c){
        printf("El triangulo es Isosceles");
    }else if (b==c){
        printf("El triangulo es Isosceles");
    }else{
        printf("El triangulo es Escaleno");
    } 
}