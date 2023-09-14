#include <stdio.h>
#include <string.h>

int main(void){
    char nombres[5][20] = {"Dieter", "Rocel", "Happy", "Leo", "Juan"};
    for (int i = 0; i <= 4; i++)
    {
        printf("%s\n", nombres[i]);
    }
    
}