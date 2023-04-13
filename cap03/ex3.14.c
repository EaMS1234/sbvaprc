#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada do usuário
    int numero1;
    int numero2;

    int soma = 0;

    printf("N1: ");
    scanf("%d", &numero1);

    printf("N2: ");
    scanf("%d", &numero2);

    if (numero2 >= numero1)
    {
        for (int i = numero1; i <= numero2; i++)
        {
            soma += i;
        }

        printf("Somatorio entre %d e %d: %d\n", numero1, numero2, soma);
    }
    else
    {
        for (int i = numero2; i <= numero1; i++)
        {
            soma += i;
        }

        printf("Somatorio entre %d e %d: %d\n", numero2, numero1, soma);
    }

    return 0;
}
