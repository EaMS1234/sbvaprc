#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual;
    int anoNatal;
    int idade;

    printf("Ano de nascimento: ");
    scanf(" %d", &anoNatal);

    printf("Ano atual: ");
    scanf(" %d", &anoAtual);

    idade = anoAtual - anoNatal;

    printf("Idade aproximada: %i\n", idade);

    return 0;
}
