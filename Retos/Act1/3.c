#include <stdio.h>

int main(void){
    int matriz[3][3]={
        1, 2, 3,
        4, 6, 7,
        9, 8, 2
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    

}