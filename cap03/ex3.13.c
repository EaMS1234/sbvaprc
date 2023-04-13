#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores do usuário
    int numero1;
    int numero2;

    // Quantidade de números divisíveis por ...
    int divisiveis2 = 0;
    int divisiveis3 = 0;
    int divisiveis4 = 0;

    int maior;
    int menor;

    printf("N1: ");
    scanf("%d", &numero1);

    printf("N2: ");
    scanf("%d", &numero2);

    // Ordena o maior e o menor
    if (numero1 >= numero2)
    {
        maior = numero1;
        menor = numero2;
    }
    else
    {
        maior = numero2;
        menor = numero1;
    }

    for (int i = menor; i <= maior; i++)
    {
        if (i % 2 == 0)
        {
            divisiveis2++;
        }

        if (i % 3 == 0)
        {
            divisiveis3++;
        }

        if (i % 4 == 0)
        {
            divisiveis4++;
        }
    }

    printf("Multiplos de 2: %d\n", divisiveis2);
    printf("Multiplos de 3: %d\n", divisiveis3);
    printf("Multiplos de 4: %d\n", divisiveis4);

    return 0;
}
