#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int primeiroNumero;
    int segundoNumero;

    // Operações
    int media;

    printf("Primeiro numero: ");
    scanf(" %i", &primeiroNumero);

    printf("Segundo numero: ");
    scanf(" %i", &segundoNumero);

    // Executa a operação
    media = (primeiroNumero + segundoNumero) / 2;

    printf("Media aritmetica: %i\n", media);

    return 0;
}
