#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("Enter width: \n");
        scanf("%i",&n);
    }
    while(n < 1);

    for(int iter=0; iter<n; iter++)
    {
        //printf("#");
        for(int iter=0; iter<n; iter++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}