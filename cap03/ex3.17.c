#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada do usuário
    int posicao;

    // Variáveis da sequencia de fibonacci
    int anterior = 0;
    int ultimo = 0;
    int atual = 1;

    printf("Termo desejado: ");
    scanf("%d", &posicao);

    for (int i = 0; i < posicao; i++)
    {
        anterior = ultimo;
        ultimo = atual;
        atual = anterior + ultimo;
    }

    printf("Fibonacci de %d e %d\n", posicao, atual);

    return 0;
}
