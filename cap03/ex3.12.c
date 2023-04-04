#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadePares = 0;

    int numero1;
    int numero2;

    printf("N1: ");
    scanf("%d", &numero1);

    printf("N2: ");
    scanf("%d", &numero2);

    if (numero1 <= numero2)
    {
        for (int i = numero1; i <= numero2; i++)
        {
            if (i % 2 == 0)
            {
                quantidadePares++;
            }
        }

        printf("Numeros pares entre %d e %d: %d\n", numero1, numero2, quantidadePares);
    }
    else
    {
        for (int i = numero2; i <= numero1; i++)
        {
            if (i % 2 == 0)
            {
                quantidadePares++;
            }
        }

        printf("Numeros pares entre %d e %d: %d\n", numero2, numero1, quantidadePares);
    }

    return 0;
}
