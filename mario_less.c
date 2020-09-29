#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declares a couple variables.
    int space;
    int height;

    // Prompts a user for an input thats between 1-8 inclusive. If not, prompt the user again.
    do
    {
        height = get_int("What height do you want? :");
    }
    while (height < 1 || height > 8);


    // This for loop will create a right aligned, hashtag pyramid.
    for (int i = 0; i < height; i++)
    {
        for (space = (height - i); space > 1; space--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}