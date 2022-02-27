#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Const here works the same as JavaScript, prevents it from being changed.
    // In C, we capitalize contsants so we know that it is one later in the program if we come across it.
    const int MINE = 2
    int points = get_int("how many points did you lose? ");
    
    if(points < MINE)
    {
        printf("You lost fewer than me!\n");
    }
    else if(points > MINE)
    {
        printf("You lost more points than me!\n");
    }
    else
    {
        printf("You lost the same number of points as me!\n");
    }
}