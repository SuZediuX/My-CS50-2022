#include <stdio.h>

int main(void)
{
    int points;
    int my_points = 2;
    
    printf("How many points did you lose?\n");
    scanf("%i", &points);

    if(points < my_points)
    {
        printf("You lost less points than me.\n");
    }
    else if(points > my_points)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
    return 0;
}