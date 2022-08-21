#include <stdio.h>

int main(void)
{
    int n;
    
    printf("Enter an integer: \n");
    scanf("%i", &n);

    if(n % 2 == 0)
    {
        printf("The number you entered is even!\n");
    }
    else
    {
        printf("The number you entered is odd!\n");
    }

    return 0;
}