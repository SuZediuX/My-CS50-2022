#include<stdio.h>

int main(void)
{
    long first_num, second_num;
    printf("Enter a value for x: ");
    scanf("%ld", &first_num);
    printf("You entered, for x: %ld \n", first_num);

    printf("Enter a value for y: ");
    scanf("%ld", &second_num);
    printf("You entered, for y: %ld \n", second_num);

    printf("Sum of x and y is: %li \n", first_num+second_num);

    if (first_num < second_num)
    {
        printf("x is less than y \n");
    }
    else if (first_num > second_num)
    {
        printf("x is greater than y \n");
    }
    else
    {
        printf("x is equal to y \n");
    }
    return 0;
}