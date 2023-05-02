#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdImpares = 0;

    int array[10];
    int arrayIntermediario[10];

    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Adiciona somente ímpares um array intermediário
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            arrayIntermediario[qtdImpares] = array[i];
            qtdImpares++;
        }
    }

    for (int i = 0; i < qtdImpares; i++)
    {
        // Copia o array intermediário para o array principal
        array[i] = arrayIntermediario[i];

        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
