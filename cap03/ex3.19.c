#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 9; j >= i; j--)
            {
                printf("*");
            }
        }

        // Pula a linha
        printf("\n");
    }

    return 0;
}
