#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char *destino, const char *origem);

int main()
{
    char string[40];
    char stringInvertido[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string) - 1] == '\0';

    inverter(stringInvertido, string);

    printf("Invertida: %s\n", stringInvertido);

    return 0;
}

void inverter(char *destino, const char *origem)
{
    int max = strlen(origem) - 1;

    for (int i = 0; i <= max; i++)
    {
        destino[i] = origem[(max - 1) - i];
    }

    destino[max] = '\0';
}
