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

    printf("B/b: %d\n",
           contarOcorrencias(frase, 'B') + contarOcorrencias(frase, 'b'));

    printf("C/c: %d\n",
           contarOcorrencias(frase, 'C') + contarOcorrencias(frase, 'c'));

    printf("D/d: %d\n",
           contarOcorrencias(frase, 'D') + contarOcorrencias(frase, 'd'));

    printf("E/e: %d\n",
           contarOcorrencias(frase, 'E') + contarOcorrencias(frase, 'e'));

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
