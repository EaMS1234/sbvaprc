#include <stdio.h>
#include <stdlib.h>

int main()
{
    int existe;
    int qtdIntersec = 0;

    int array1[5];
    int array2[5];
    int arrayInterseccao[5];

    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("    array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("    array2[%d]: ", i);
        scanf("%d", &array2[i]);

        for (int j = 0; j < 5; j++)
        {
            // Verifica se existe algum valor igual em array1[j]
            if (array2[i] == array1[j])
            {
                existe = 0;

                for (int k = 0; k < qtdIntersec; k++)
                {
                    if (arrayInterseccao[k] == array1[j])
                    {
                        existe = 1;
                    }
                }

                if (existe == 0)
                {
                    arrayInterseccao[qtdIntersec] = array1[j];
                    qtdIntersec++;
                }
            }
        }
    }

    if (qtdIntersec > 0)
    {
        for (int i = 0; i < qtdIntersec; i++)
        {
            printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
        }
    }
    else
    {
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!\n");
    }

    return 0;
}
