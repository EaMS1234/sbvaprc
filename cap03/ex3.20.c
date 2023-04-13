#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        // Pula a linha
        printf("\n");
    }
    printf("\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        // Pula a linha
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        // Espaços (decresente)
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }

        // Asteriscos (crescente)
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        // Pula a linha
        printf("\n");
    }
    printf("\n");

    for (int i = 5; i >= 1; i--)
    {
        // Espaços (crescente)
        for (int j = (5 - i); j > 0; j--)
        {
            printf(" ");
        }

        // Asteriscos (decrescente)
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }

        // Pula a linha
        printf("\n");
    }
    printf("\n");

    return 0;
}
