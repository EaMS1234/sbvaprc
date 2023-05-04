#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][2];
    int b[2][3];
    int r[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("A x B =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Multiplica as matrizes
            r[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]);

            printf("%03d", r[i][j]);

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

    return 0;
}
