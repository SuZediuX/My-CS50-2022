#include <stdio.h>

int main(void)
{
    int size;

    do
    {
        printf("Enter width: \n");
        scanf("%i",&size);
    }
    while(size < 1);

    for(int iter=0; iter<size; iter++)
    {
        //printf("#");
        for(int iter=0; iter<size; iter++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}