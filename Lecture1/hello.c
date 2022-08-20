#include <stdio.h>

int main(void)
{
    //stdio answer = get_string("What's your name?");
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Name: ");
    puts(name);
    return 0;
}