#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lados;
    float medidaLado;

    printf("Entre com a quantidade de lados: ");
    scanf("%i", &lados);

    printf("Entre com a medida do lado: ");
    scanf("%f", &medidaLado);

    if (lados == 3)
    {
        printf("TRIANGULO de perimetro %.2f\n", medidaLado * 3);
    }
    else if (lados == 4)
    {
        printf("QUADRADO de area %.2f\n", medidaLado * medidaLado);
    }
    else if (lados == 5)
    {
        printf("PENTAGONO\n");
    }
    else
    {
        printf("Poligono nao identificado\n");
    }

    return 0;
}
