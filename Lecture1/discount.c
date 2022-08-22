#include <stdio.h>

float calc_discount(float, int);

int main(void)
{
    float regular;
    int discount;
    //const float SALE_PERC_OFF = 0.85;
    printf("What is the regular price?\n");
    scanf("%f",&regular);

    printf("What is the discount percentage?\n");
    scanf("%i", &discount);
    
    float sale = calc_discount(regular, discount);
    printf("The final price will be: %f\n", sale);

    return 0;
}

float calc_discount(float price, int perc_off)
{
    //const float SALE_PERC_OFF = 1 - perc_off;
    //float sale = price * SALE_PERC_OFF;

    return price * (100 - perc_off) / 100;
}