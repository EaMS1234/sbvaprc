#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura;

    printf("Altura: ");
    scanf("%d", &altura);

    for (int i = 1; i <= abs(altura); i++)
    {
        if (altura > 0)
        {
            // Espaços em branco
            for (int j = (abs(altura) - i); j > 0; j--)
            {
                printf(" ");
            }

            // Asteriscos
            for (int j = 0; j < 2; j++)
            {
                // Repete duas vezes pra formar o lado direito da pirâmide
                for (int k = j; k < i; k++)
                {
                    printf("*");
                }
            }
        }
        else
        {
            // Espaços em branco
            for (int j = 1; j < i; j++)
            {
                printf(" ");
            }

            // Asteriscos
            for (int j = 0; j < 2; j++)
            {
                // Repete duas vezes pra formar o lado direito da pirâmide
                for (int k = j; k <= (abs(altura) - i); k++)
                {
                    printf("*");
                }
            }
        }

        // Pula a linha
        printf("\n");
    }

    return 0;
}
