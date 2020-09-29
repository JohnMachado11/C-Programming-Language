#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Variable declarations.
    int height;
    int space;
    int all_rows;
    int hash;

    // Prompts a user for an input thats between 1-8 inclusive.
    // If not, prompt the user again.
    do
    {
        height = get_int("Height :");
    }
    while (height < 1 || height > 8);

    // This for loop will create a split hashtag pyramid.
    // Outer loop "all_rows" creates each row on the pyramid.
    for (all_rows = 0; all_rows < height; all_rows++)
    {
        // adds spaces
        for (space = (height - all_rows); space > 1; space--)
        {
            printf(" ");
        }
        // Makes left side of pyramid with hash "blocks".
        for (hash = 0; hash <= all_rows; hash++)
        {
            printf("#");
        }
        // Creates 2 spaces between both pyramids.
        printf("  ");

        // Makes right side of pyramid with hash "blocks".
        for (hash = 0; hash <= all_rows; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}