#include <stdio.h>
#include <stdlib.h>

int lePositivo();
int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int main()
{
    int ladoA[5];
    int ladoB[5];
    int ladoC[5];

    for (int i = 0; i < 5; i++)
    {
        printf("ladoA[%d]: ", i);
        ladoA[i] = lePositivo();

        printf("ladoB[%d]: ", i);
        ladoB[i] = lePositivo();

        printf("ladoC[%d]: ", i);
        ladoC[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Valores %d, %d e %d: ", ladoA[i], ladoB[i], ladoC[i]);

        switch (tipoTriangulo(ladoA[i], ladoB[i], ladoC[i]))
        {
        case 0:
            printf("nao formam um triangulo\n");
            break;

        case 1:
            printf("triangulo equilatero\n");
            break;

        case 2:
            printf("triangulo isosceles\n");
            break;

        case 3:
            printf("triangulo escaleno\n");
            break;
        }
    }

    return 0;
}

int lePositivo()
{
    int numero;

    while (1)
    {
        scanf("%d", &numero);

        if (numero < 0)
        {
            printf("Entre com um valor positivo: ");
        }
        else
        {
            return numero;
        }
    }
}

int tipoTriangulo(int ladoA, int ladoB, int ladoC)
{
    if (abs(ladoB - ladoC) < ladoA && ladoA < ladoB + ladoC &&
        abs(ladoA - ladoC) < ladoB && ladoB < ladoA + ladoC &&
        abs(ladoA - ladoB) < ladoC && ladoC < ladoA + ladoB)
    {
        if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA)
        {
            if (ladoA == ladoB && ladoB == ladoC)
            {
                // Equilátero
                return 1;
            }

            // Isóceles
            return 2;
        }

        // Escaleno
        return 3;
    }

    // Não forma um triângulo
    return 0;
}
