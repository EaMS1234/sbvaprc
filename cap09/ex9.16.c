#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removerLetra(char *str, char c);

int main()
{
    char caractere;

    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("Caractere: ");
    scanf(" %c", &caractere);

    removerLetra(frase, caractere);

    printf("%s\n", frase);

    return 0;
}

void removerLetra(char *str, char c)
{
    int max = strlen(str);

    for (int i = 0; i < max; i++)
    {
        // Verifica se o caractere bate na posição
        if (str[i] == c || tolower(str[i]) == c)
        {
            // Traz todos os caracteres a seguir uma casa pra trás
            for (int j = i; j < max; j++)
            {
                str[j] = str[j + 1];
            }

            // Diminui o número máximo de caracteres
            max--;
        }
    }
}
