#include <stdio.h>

int main(void){
    int matriz1[2][2];
    int matriz2[2][2];
    int matrizSum[2][2];
    printf("Ingrese datos de Matriz 1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Ingrese datos de Matriz 2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizSum[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrizSum[i][j]);
        }
        printf("\n");
    }
}