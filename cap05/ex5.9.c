#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100][100];

    int numero;

    printf("Numero entre 1 e 100: ");
    scanf("%d", &numero);

    if (numero > 100 || numero < 1)
    {
        printf("Numero incorreto!\n");
    }
    else
    {
        for (int i = 0; i < numero; i++)
        {
            for (int j = 0; j < numero; j++)
            {
                if (i == 0 && j == 0)
                {
                    // Canto superior esquerdo
                    array[i][j] = 1;
                }
                else if (i == 0)
                {
                    // Borda superior
                    array[i][j] = j + 1;
                }
                else if (j == 0)
                {
                    // Borda esquerda
                    array[i][j] = i + 1;
                }
                else
                {
                    // O resto
                    array[i][j] = array[i - 1][j - 1];
                }

                // Espaça os elementos corretamente
                if (j < numero - 1)
                {
                    printf("%3d ", array[i][j]);
                }
                else
                {
                    printf("%3d\n", array[i][j]);
                }
            }
        }
    }

    return 0;
}
