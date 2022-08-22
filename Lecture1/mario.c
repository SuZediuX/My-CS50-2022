#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int size;
/*    do
    {
        printf("Enter width: \n");
        scanf("%i",&size);
    }
    while(size < 1);
*/
    while(true)
    {
        printf("Enter width: \n");
        scanf("%i",&size);
        if(size>0)
        {
            break;
        }
    }

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