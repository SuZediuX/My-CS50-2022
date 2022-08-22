#include <stdio.h>

int main(void)
{
    //float z;
    int x, y;
    
    printf("X:");
    scanf("%i",&x);    
    printf("\nY:");
    scanf("%i",&y); 

    float z = (float) x / (float) y;

    printf("\nZ: %.50f\n", z);
    
}