#include<stdio.h>

int main(void)
{
    int x, y;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("You entered, for x: %d \n", x);

    printf("Enter a value for y: ");
    scanf("%d", &y);
    printf("You entered, for y: %d \n", y);

    printf("Sum of x and y is: %i \n", x+y);
    return 0;
}