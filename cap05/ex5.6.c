#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2][3];
    int arrayTransposta[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Lê a entrada do usuário
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);

            // Transpõe
            arrayTransposta[j][i] = array[i][j];
        }
    }

    // Mostra o array
    printf("M:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%03d", array[i][j]);

            if (j == 2)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }

    // Mostra o array transposto
    printf("\nMt:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%03d", arrayTransposta[i][j]);

            if (j == 1)
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
