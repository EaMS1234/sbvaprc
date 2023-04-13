#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anterior = 0; // Anterior a 'ultimo'
    int ultimo = 0;   // Anterior a 'atual'
    int atual = 1;

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", atual);

        anterior = ultimo;
        ultimo = atual;
        atual = anterior + ultimo;
    }

    // Pula a linha no final
    printf("\n");

    return 0;
}
