#include <stdio.h>

int main(){
    int i, j, cont=100;
    char matriz[10][8];
    for(i=0; i<10; i++){
        for(j=0; j<8; j++){
            switch (j){
                case 0:
                    matriz[i][j]=("%d",i+1);
                    break;
                case 1:
                    matriz[i][j]=("->");
                    break;
                case 2:
                    matriz[i][j]=("%d", cont);
                    cont+=10;
                    break;
                case 3:
                    matriz[i][j]=("%d", cont);
                    cont+=10;
                    break;
                case 4:
                    matriz[i][j]=("%d", cont);
                    cont+=10;
                    break;
                case 5:
                    matriz[i][j]=("%d", cont);
                    cont+=10;
                    break;
                case 6:
                    matriz[i][j]=("%d", cont);
                    cont+=10;
                    break;
                case 7:
                    matriz[i][j]=("%d", cont);
                    cont=100;
                    break;
            }
        }
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<8; j++){
            printf("%s\t\t", matriz[i][j]);
        }
            printf("\n");

    }
}