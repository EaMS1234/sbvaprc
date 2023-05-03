#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplicador;

    int array[3][4];
    int araryMult[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Multiplicar por: ");
    scanf("%d", &multiplicador);

    printf("arrayMult:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            araryMult[i][j] = array[i][j] * multiplicador;

            printf("%03d", araryMult[i][j]);

            if (j == 3)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }

    return 0;
}
