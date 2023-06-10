#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalavras(const char *str);

int main()
{
    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

    printf("Quantidade de palavras: %d\n", contarPalavras(frase));

    return 0;
}

int contarPalavras(const char *str)
{
    // Uma frase deve ter pelo menos uma palavra
    int n = 1;

    for (int i = 0; i < strlen(str); i++)
    {
        // Conta quantos espaços há na frase
        if (str[i] == 32)
        {
            n++;
        }
    }

    return n;
}
