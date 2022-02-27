#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height = get_int("Height: ");
    int counter_left = 0;
    int range_left = height;
    int counter_right = 0;
    int range_right = height;
    for(int i = 0; i < height; i++)
    {
        //rl is 3
        while(counter_left < range_left-1)
        {
            printf(" ");
            counter_left++;
        }
        //   #
        // counter_left = 3;
        // range_left = 4;

        //  ##
        //cl 2
        //rl 3


        // printf("#");
        while(counter_left >= range_left-1 && counter_left < height)
        {
            printf("#");
            counter_left++;
        }
        //counter 4
        //range 4

        //cl 4
        //rl3
        printf("  ");
        while(counter_left >= range_left)
        {
            printf("#");
            counter_left--;
        }
        // counter_left is now 3, 
        while(counter_left < range_left && counter_left >= 0)
        {
            printf(" ");
            counter_left--;
        }
        counter_left++;
        range_left--;
        // counter_right = 0;
        // range_right--;
        printf("\n");
        
    }
    // printf("  ");
    // for(int j = 0; j < height; j++)
    // {
    //     while(counter_right < range_right-1)
    //     {
    //         printf("#");
    //         counter_right++;
    //     }
    //     while(counter_right >= range_right-1 && counter_right < height)
    //     {
    //         printf(" ");
    //         counter_right++;
    //     }
    //     counter_right = 0;
    //     range_right--;
    //     printf("\n");
    // }





    // for(int i = 0; i < height; i++)
    // {
    //     int range left= height;
    //     for(int j = 0; j < height; j++)
    //     {
    //         while(counter_left < range_left1)
    //         {
    //             printf(" ");
    //             counter_left++;
    //             range_left-;
    //         }
    //         printf("#");
    //     }
    //     printf("\n");
        
    // }
    // int counter_left = 0;
    // while(counter_left < height)
    // {
    //         for(int i = 0; i < height; i++)
    //     {
            
    //         for(int j = 0; j < height; j++)
    //         {
    //             printf("#    #");
    //         }
    //         printf("\n");
            
    //     }
    // }

}