#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Owed amount: ");
    }
    while (dollar <= 0);
    int cents = round(dollar * 100);
    int coins =0;

    while(cents >= 25)
    {
        cents = cents - 25;
        coins = coins + 1;
    }
     while(cents >= 10)
    {
        cents = cents - 10;
        coins = coins + 1;
    }
     while(cents >= 5)
    {
        cents = cents - 5;
        coins = coins + 1;
    }
        while(cents >= 1)
    {
        cents = cents - 1;
        coins = coins + 1;
    }
    printf("Number of coins are %i\n",coins);
}