#include <stdio.h>

int main(void)
{
    int points;
    const int MY_POINTS = 2;
    
    printf("How many points did you lose?\n");
    scanf("%i", &points);

    if(points < MY_POINTS)
    {
        printf("You lost less points than me.\n");
    }
    else if(points > MY_POINTS)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
    return 0;
}