#include <stdio.h>

int main(void) {
    int sum=0;
    int cont = 0;
    int i = 0;
    while (cont<100)
    {
        if(i%2!=0){
            sum=i+sum;
            cont+=1;
            printf("Nro %d\n", i);
        }
        i++;
    }
    printf("La suma de los primeros 100 numeros impares es: %d\n", sum);
}


