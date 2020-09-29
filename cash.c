#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Important variable declaration to allow
    // floating point numbers on user input below.
    float change;

    // Prompts a user for a number.
    do
    {
        change = get_float("Change Owed: ");
    }
    while (change <= 0);

    int cents = round(change * 100);

    // Variable declarations for the two important constants throughout this program.
    int remaining_change = cents;
    int total_coins = 0;

    // Variable declarations for the coins.
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // Each while loop is checked depending on the value of remaining_change.
    while (remaining_change >= 25)
    {
        remaining_change = remaining_change - quarter;
        total_coins = total_coins + 1;
    }

    while (remaining_change >= 10)
    {
        remaining_change = remaining_change - dime;
        total_coins = total_coins + 1;
    }

    while (remaining_change >= 5)
    {
        remaining_change = remaining_change - nickel;
        total_coins = total_coins + 1;
    }

    while (remaining_change >= 1)
    {
        remaining_change = remaining_change - penny;
        total_coins = total_coins + 1;
    }

    printf("%i\n", total_coins);
}