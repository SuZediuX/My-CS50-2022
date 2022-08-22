#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollar;
    printf("Enter dollar amount: ");
    scanf("%f",&dollar);

    int pennies = round(dollar * 100);
    printf("\nPennies based on amount you entered: %i\n",pennies);
}