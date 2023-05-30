#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[256];

    printf("Nome: ");
    fgets(nome, 256, stdin);
    nome[strlen(nome) - 1] = '\0';

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", nome);
    }

    return 0;
}
