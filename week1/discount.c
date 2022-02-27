# include <cs50.h>
# include <stdio.h>

float pricecalc(float price, int percentage);

int main(void)
{
    float regular = get_float("Item price: ");
    int percent_off = get_int("Discount Percentage: ");
    float sale = pricecalc(regular, percent_off);
    printf("--------The sale price is %2f\n", sale);

}
float pricecalc(float price, int percentage)
{
    // printf("%f", multiplier);
    return price * (100 - percentage) / 100;
}