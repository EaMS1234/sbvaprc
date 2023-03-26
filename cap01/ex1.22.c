#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    float valorComDesconto;

    printf("Valor do produto: ");
    scanf(" %f", &valor);

    valorComDesconto = valor * 0.91;

    printf("Preco de venda com 9%% de desconto: %.2f\n", valorComDesconto);

    return 0;
}
