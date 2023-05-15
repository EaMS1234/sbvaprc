#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Numero: ");
    scanf("%f", &numero);

    printf("Maior inteiro mais proximo: %.2f\n", ceilf(numero));
    printf("Menor inteiro mais proximo: %.2f\n", floorf(numero));

    return 0;
}
