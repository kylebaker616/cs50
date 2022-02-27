# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int num = get_int("Enter number to check if even or odd: ");
    if(num % 2 == 0)
    {
        printf("%i is even!\n", num);
    }
    else
    {
        printf("%i is odd!\n", num);
    }
}