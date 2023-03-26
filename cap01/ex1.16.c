#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float base;
    float altura;

    // Operação
    float area;

    printf("Valor da base: ");
    scanf(" %f", &base);

    printf("Valor da altura: ");
    scanf(" %f", &altura);

    // Realiza a operação
    area = (base * altura) / 2;

    printf("Area = %.2f\n", area);

    return 0;
}
