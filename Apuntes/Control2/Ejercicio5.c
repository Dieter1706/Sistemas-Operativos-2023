#include <stdio.h>

int main(){
    char palabras[20], palabras2[20];
    int j=0;
    scanf("%s", &palabras);
    for(int i=19;i>=20;i--){
        palabras2[j]=palabras[i];
        j+=1;
    }
    printf("%s\n", palabras2);
}