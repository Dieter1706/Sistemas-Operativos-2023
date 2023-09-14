#include <stdio.h>
#include <string.h>


int main(void){
    char nombres[5][20];
    char nombre[20];
    for (int i = 0; i <= 4; i++)
    {
        printf("Ingrese el nombre numero %d\n", i+1);
        scanf("%s", &nombres[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%s\n", nombres[i]);
    }
    
}