#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c);

int main()
{
    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("A/a: %d\n",
           contarOcorrencias(frase, 'A') + contarOcorrencias(frase, 'a'));

    printf("E/e: %d\n",
           contarOcorrencias(frase, 'E') + contarOcorrencias(frase, 'e'));

    printf("I/i: %d\n",
           contarOcorrencias(frase, 'I') + contarOcorrencias(frase, 'i'));

    printf("O/o: %d\n",
           contarOcorrencias(frase, 'O') + contarOcorrencias(frase, 'o'));

    printf("U/u: %d\n",
           contarOcorrencias(frase, 'U') + contarOcorrencias(frase, 'u'));

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
