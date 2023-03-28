#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroNumero;
    int segundoNumero;
    int maior;
    int menor;

    printf("Entre com um numero: ");
    scanf("%d", &primeiroNumero);

    printf("Entre com outro numero: ");
    scanf("%d", &segundoNumero);

    if (primeiroNumero >= segundoNumero)
    {
        maior = segundoNumero;
        menor = primeiroNumero;
    }
    else
    {
        maior = primeiroNumero;
        menor = segundoNumero;
    }

    printf("Ordem decrescente: %d >= %d\n", menor, maior);

    return 0;
}
