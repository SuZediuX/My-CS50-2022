#include <stdio.h>

void meow(void)
{

}

int main(void)
{
    int counter = 0;

    for(int iter=0;iter<3;iter++)
    {
        printf("Meow!\n");
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