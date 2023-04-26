#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elementos = 0;

    int valor;

    int array[9];

    // Lê os valores
    while (1)
    {
        printf("Quantidade de elementos (1 a 9): ");
        scanf("%d", &elementos);

        if (elementos > 9 || elementos < 1)
        {
            printf("Quantidade incorreta, forneca novamente!\n");
        }
        else
        {
            for (int i = 0; i < elementos; i++)
            {
                printf("array[%d]: ", i);
                scanf("%d", &array[i]);
            }

            printf("Valor que sera inserido: ");
            scanf("%d", &valor);

            break;
        }
    }

    // Desloca os elementos
    for (int i = elementos; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = valor;

    // Mostra os elementos
    for (int i = 0; i <= elementos; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
