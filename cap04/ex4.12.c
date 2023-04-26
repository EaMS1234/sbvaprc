#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];

    // Lê
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Apaga o primeiro número e desloca os valores
    for (int i = 0; i < 4; i++)
    {
        array[i] = array[i + 1];
    }

    // Mostra os valores do array
    for (int i = 0; i < 4; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
