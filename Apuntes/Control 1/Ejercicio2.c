#include <stdio.h>

int main(void){
    int n;
    printf("Ingrese el largo de la palabra que desea invertir\n");
    scanf("%d", &n);
    char text[n];
    char text2[n];
    printf("Ingrese la palabra que desea invertir\n");
    scanf("%s", &text);
    
    for (int i = 0; i < n; i++)
    {
        text2[n-(i+1)]=text[i];
    }
    
    printf("%s\n", text2);
}