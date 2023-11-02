#include <stdio.h>

int main(){
    int cont=0, n = 40, i;
    char frase[n], letra[1];

    printf("Se buscara la cantidad de veces que se repite la letra que usted escoja, en una frase que usted ingrese \n");
    printf("Ingrese una frase: \n");
    scanf("%s", &frase);
    printf("La frase es %s \n", frase);
    printf("Ingrese la letra que desea contabilizar: \n");
    scanf(" %s", &letra); 

    for(i=0; i<n; i++){
        if(frase[i] == letra[1]){
            cont++;
        }
    }

    printf("La letra %s se repite %d veces \n", letra, cont);
}