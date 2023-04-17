#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplicador;

    int array[5];
    int arrayMult[5];

    // Lê os números
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Lê o multiplicador
    printf("Multiplicar por: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < 5; i++)
    {
        // Salva o produto
        arrayMult[i] = array[i] * multiplicador;

        // Mostra os produtos
        printf("arrayMult[%d] = %d\n", i, arrayMult[i]);
    }

    return 0;
}
