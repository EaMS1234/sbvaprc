#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdPares = 0;
    int qtdImpares = 0;

    int array[5];
    int pares[] = {0, 0, 0, 0, 0};
    int impares[] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
        {
            pares[i] = array[i];
            qtdPares++;
        }
        else
        {
            impares[i] = array[i];
            qtdImpares++;
        }
    }

    printf("Numeros pares:");
    if (qtdPares > 0)
    {
        // Caso haja números pares ...

        for (int i = 0; i < 5; i++)
        {
            if (pares[i] != 0)
            {
                // ... diferentes de zero

                printf(" %d", pares[i]);
            }
        }

        printf(".\n");
    }
    else
    {
        printf(" nao ha.\n");
    }

    printf("Numeros impares:");
    if (qtdImpares > 0)
    {
        // Caso haja números ímpares

        for (int i = 0; i < 5; i++)
        {
            if (impares[i] != 0)
            {
                printf(" %d", impares[i]);
            }
        }

        printf(".\n");
    }
    else
    {
        printf(" nao ha.\n");
    }

    return 0;
}
