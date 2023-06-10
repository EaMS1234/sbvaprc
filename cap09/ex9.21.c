#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa(const char *str);

int main()
{
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string) - 1] = '\0';

    imprimirCaixa(string);

    return 0;
}

void imprimirCaixa(const char *str)
{
    int espacos = 80 - strlen(str) - 1;

    for (int i = 0; i < espacos / 2; i++)
    {
        printf(" ");
    }

    printf("%s", str);

    for (int i = 0; i < espacos / 2; i++)
    {
        printf(" ");
    }

    printf("\n");
}
