#include<stdio.h>

int main(void)
{
    int first_num, second_num;
    printf("Enter a value for x: ");
    scanf("%d", &first_num);
    printf("You entered, for x: %d \n", first_num);

    printf("Enter a value for y: ");
    scanf("%d", &second_num);
    printf("You entered, for y: %d \n", second_num);

    printf("Sum of x and y is: %i \n", first_num+second_num);
    return 0;
}