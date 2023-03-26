#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float primeiro;
    float segundo;

    // Operações
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Primeiro numero: ");
    scanf(" %f", &primeiro);

    printf("Segundo numero: ");
    scanf(" %f", &segundo);

    // Executa as operações
    soma = primeiro + segundo;
    subtracao = primeiro - segundo;
    multiplicacao = primeiro * segundo;
    divisao = primeiro / segundo;

    printf("%.2f + %.2f = %.2f\n",
           primeiro, segundo, soma);
    printf("%.2f - %.2f = %.2f\n",
           primeiro, segundo, subtracao);
    printf("%.2f * %.2f = %.2f\n",
           primeiro, segundo, multiplicacao);
    printf("%.2f / %.2f = %.2f\n",
           primeiro, segundo, divisao);

    return 0;
}
