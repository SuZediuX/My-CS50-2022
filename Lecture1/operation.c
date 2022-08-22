#include <stdio.h>

int main(void)
{
    float x, y, z;
    
    printf("X:");
    scanf("%f",&x);    
    printf("\nY:");
    scanf("%f",&y); 

    z = x / y;

    printf("\nZ: %f\n", z);
    
}