#include <stdio.h>

int main(void)
{
    char store;
    printf("Do you agree?\n");
    scanf("%s", &store);

    if(store=='y'|| store=='Y')
    {
        printf("Agreed.\n");
    }
    else if(store=='n'|| store=='N')
    {
        printf("Didn't agree.\n");
    }

    return 0;
}