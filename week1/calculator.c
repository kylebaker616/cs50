#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    int sum = (x + y);
    printf("Your answer is %i", sum);
}
//$ clang calculator.c -o calculator -lcs50 for compiling