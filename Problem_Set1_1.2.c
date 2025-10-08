#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    string spacing = " ";
    string Blocks = "#";
    bool Continue = false;
    int height = 0;

    while (Continue == false)
    {
        height = get_int("Height: ");
        if (height > 0)
        {
            Continue = true;
        }
    }
    int row = 0;

    while (row < height && height >= 0)
    {
        bool allowed = true;

        for (int k = height - row - 1; k > 0; k--)
        {
            if (allowed)
            {
                printf("%s", spacing);
            }
        }

        for (int j = 0; j <= row; j++)
        {
            printf("%s", Blocks);
        }

        printf("\n");
        row++;
    }
}
