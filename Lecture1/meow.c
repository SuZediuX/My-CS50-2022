#include <stdio.h>

void meow(int);    //Function declaration

int main(void)
{
    //int counter = 0;
    int choice;

    printf("Enter number of times you want to display 'Meow!'\n");
    scanf("%i",&choice);
    meow(choice);
    
/*
    while(counter < 3)
    {
        printf("Meow!!!\n");
        counter++;
    }
*/
    return 0;
}

void meow(int param)    //Function definition
{
    for(int iter=0; iter<param; iter++)
    {
        printf("Meow!\n");
    }

}