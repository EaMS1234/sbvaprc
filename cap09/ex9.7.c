#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int k = 0;

    char palavra[40];
    char pares[5][2][40];

    // Lê as palavras
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Par %d, palavra %d: ", i + 1, j + 1);

            // Recebe e salva o array de forma correta
            fgets(palavra, 40, stdin);
            palavra[strlen(palavra) - 1] = '\0';

            // Salva o array 'palavra' em 'pares[i][j]'
            k = 0;
            while (1)
            {
                pares[i][j][k] = palavra[k];

                // Detecta o final de um string
                if (palavra[k] == '\0')
                {
                    break;
                }
                else
                {
                    k++;
                }
            }
        }
    }

    // Processa e mostra
    for (int i = 0; i < 5; i++)
    {
        printf("%s - %s: ", pares[i][0], pares[i][1]);

        if (strcmp(pares[i][0], pares[i][1]) == 0)
        {
            printf("IGUAIS\n");
        }
        else if (strcmp(pares[i][0], pares[i][1]) < 0)
        {
            printf("ORDEM CRESCENTE\n");
        }
        else if (strcmp(pares[i][0], pares[i][1]) > 0)
        {
            printf("ORDEM DECRESCENTE\n");
        }
    }

    return 0;
}
