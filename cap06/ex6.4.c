#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Numero: ");
    scanf("%f", &numero);

    printf("Valor absoluto: %.2f\n", fabs(numero));

    return 0;
}
