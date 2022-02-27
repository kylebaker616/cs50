#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    long credit = get_long("Number: ");
    int status = 0;
    // The following variables are representing the number of digits in each card number eg visa has 13 or 16, amex has 15, mastercard has 16
    long visa_one = 1000000000000;
    long amex_one = 100000000000000;
    long mc_one = 1000000000000000;
    long visa_two = 1000000000000000;
    // The following are the 'identifier digits' these are the first one or two numbers that are unique to the card manufacturer
    int amex_first = 34;
    int amex_second = 37;
    int mc_first = 51;
    int mc_second = 52;
    int mc_third = 53;
    int mc_fourth = 54;
    int mc_fifth = 55;
    int visa_first = 4;

    long credit_skip = credit / 10;
    long credit_for_size = credit;
    int sum = 0;
    int real_first_skip = 0;
    int real_first = 0;

    // We only want to assess the card if it is at least 13 digits long
    if(credit >= visa_one)
    {   
        // The do while loop is very similar to a while loop, except the do while performs the action before the condition. 'do x, while y' rather than 'while y, do x'
        do
        {
            int digit = credit_skip % 10;
            int mult = digit * 2;
            int temp;
            if(mult > 9)
            {
                mult = mult - 9;
            }
            sum += mult;
            if(credit_skip / 100 == 0)
            {
                real_first_skip = credit_skip;
                // printf("REAL found in 1: %i \n", real_first_skip);

            }
        }while(credit_skip/=100);
        do
        {
            int other_digit = credit % 10;
            sum += other_digit;
            if(credit / 100 == 0)
            {
                real_first = credit;
                // printf("REAL found in 2: %i \n", real_first);
            }
        }while(credit/=100);

    
        if(sum % 10 == 0)
        {   
            if(real_first == amex_first || real_first == amex_second || real_first_skip == amex_first || real_first_skip == amex_second)
            {
                if(credit_for_size > amex_one && credit_for_size < mc_one)
                {
                    printf("AMEX\n");
                    status++;
                }
            } else if(real_first == mc_first || real_first == mc_second || real_first == mc_third || real_first == mc_fourth || real_first == mc_fifth || real_first_skip == mc_first || real_first_skip == mc_second || real_first_skip == mc_third || real_first_skip == mc_fourth || real_first_skip == mc_fifth)
            {
                if(credit_for_size > mc_one)
                {
                    printf("MASTERCARD\n");
                    status++;
                }
            } else if(real_first == visa_first || real_first_skip == visa_first)
            {
                if(credit_for_size > visa_one && credit_for_size < amex_one || credit_for_size > visa_two)
                {
                    printf("VISA\n");
                    status++;
                }
            }
        } 

        if(status == 0)
        {
            printf("INVALID\n");
        }
    } else printf("INVALID\n");
    // else 
    // {
    //     printf("INVALID\n");
    // }    
    // if(status == 1)
    // {
    //     if(credit > visa_one && credit < amex_one)
    //     {
    //         int firsts = credit / 10000000000;
    //         printf("%i", firsts);
    //     }
    // }

    // printf("Final sum is: %i \n", sum);
    // printf("");
    // printf("%li\n", credit);
    // printf("%s", status)
}
//first sum is
//8 
//7 d 5
//6
//5 d 1
//4
//3 d 6
//2
//1 d 2
// 12345678
// 14 (1+4= 5) + 10 (1+0 = 1) + 6 +  ( 5 + 1 + 6 + 2 = 14)
// second is
// 16 (1 + 6) + 12 (1+2) + 8 + 4    ( 7 + 3 + 8 + 4 = 22)
// 22 + 14 = 36
//13 19 20 24 30 32 34