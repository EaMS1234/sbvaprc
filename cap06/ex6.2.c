#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base;
    float expoente;
    float resultado;

    printf("Base: ");
    scanf("%f", &base);

    printf("Expoente: ");
    scanf("%f", &expoente);

    resultado = powf(base, expoente);

    printf("%.2f ^ %.2f = %.2f\n", base, expoente, resultado);

    return 0;
}
