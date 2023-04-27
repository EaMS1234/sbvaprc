#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posicao;

    int array[10];

    // Lê
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Posição a ser removida
    while (1)
    {
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posicao);

        if (posicao > 9 || posicao < 0)
        {
            printf("Posicao invalida, forneca novamente!\n");
        }
        else
        {
            break;
        }
    }

    // Remove a posição
    for (int i = posicao; i < 9; i++)
    {
        array[i] = array[i + 1];
    }

    // Mostra o array atualizado
    for (int i = 0; i < 9; i++)
    {

        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
