#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c);

int main()
{
    int ocorrencias;
    char caractere;

    char frase[40];

    printf("Caractere: ");
    scanf(" %c", &caractere);

    while (1)
    {
        printf("Frase: ");
        fgets(frase, 40, stdin);
        frase[strlen(frase) - 1] = '\0';

        if (strcmp(frase, "fim") != 0)
        {
            ocorrencias = contarOcorrencias(frase, caractere);

            printf("%c%s%c tem %d ocorrencia(s) do caractere '%c'\n",
                   34, frase, 34, ocorrencias, caractere);
        }
        else
        {
            break;
        }
    }

    return 0;
}

int contarOcorrencias(const char *str, char c)
{
    int ocorrencias = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            ocorrencias++;
        }
    }

    return ocorrencias;
}
