#include <cs50.h>
#include <stdio.h>

void repeatPrint(char block, int count)
{
    for(int blocks = 0; blocks < count; blocks++)
    {
        printf("%c", block);
    }
}

int main(void)
{
    int height = get_int("Height:");
    int spaceCount = height - 1;

    for (int row = 0; row < height; row++)
    {
        repeatPrint(' ', spaceCount);
        repeatPrint('#', row + 1);
        printf(" ");
        repeatPrint('#', row + 1);

        spaceCount--;
        printf("\n %i", row);
    }
}

