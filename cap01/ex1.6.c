#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int primeiroNumero;
    int segundoNumero;

    // Operações
    int soma;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Primeiro numero: ");
    scanf(" %d", &primeiroNumero);

    printf("Segundo numero: ");
    scanf("%d", &segundoNumero);

    // Executa as operações
    soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
    multiplicacao = primeiroNumero * segundoNumero;
    divisao = primeiroNumero / segundoNumero;

    printf("%d + %d = %d\n",
           primeiroNumero, segundoNumero, soma);

    printf("%d - %d = %d\n",
           primeiroNumero, segundoNumero, subtracao);

    printf("%d * %d = %d\n",
           primeiroNumero, segundoNumero, multiplicacao);

    printf("%d / %d = %d\n",
           primeiroNumero, segundoNumero, divisao);

    return 0;
}
