#include <stdio.h>

float calc_discount(float);

int main(void)
{
    float regular;
    //const float SALE_PERC_OFF = 0.85;
    printf("What is the regular price?\n");
    scanf("%f",&regular);
    
    float sale = calc_discount(regular);
    printf("The final price will be: %f\n", sale);

    return 0;
}

float calc_discount(float price)
{
    const float SALE_PERC_OFF = 0.85;
    float sale = price * SALE_PERC_OFF;

    return sale;
}