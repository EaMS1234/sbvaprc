#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anterior;
    int numero;
    int proximo;

    printf("Forneca um numero inteiro: ");
    scanf(" %d", &numero);

    anterior = numero - 1;
    proximo = numero + 1;

    printf("Sucessor de %i: %i\n", numero, proximo);
    printf("Antecessor de %i: %i\n", numero, anterior);

    return 0;
}
