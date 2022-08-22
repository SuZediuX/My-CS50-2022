#include <stdio.h>

void meow(void);    //Function declaration

int main(void)
{
    int counter = 0;

    for(int iter=0;iter<3;iter++)
    {
        meow();
    }
/*
    while(counter < 3)
    {
        printf("Meow!!!\n");
        counter++;
    }
*/
    return 0;
}

void meow(void)    //Function definition
{
    printf("Meow!\n");
}