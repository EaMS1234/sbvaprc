#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho(const char *str);

int main()
{
    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);

    printf("%d caractere(s)!\n", tamanho(frase));

    return 0;
}

int tamanho(const char *str)
{
    int n = 0;

    while (1)
    {
        if (str[n] == '\0')
        {
            // Subtrai-se 1 para que não inclua o "\0"
            return n - 1;
        }
        else
        {
            n++;
        }
    }
}
