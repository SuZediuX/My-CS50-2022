#include <stdio.h>

int main(void)
{
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Name: %s", name);
    //puts(name);
    return 0;
}