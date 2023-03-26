#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valor
    float lado;

    // Operações
    float perimetro;
    float area;

    printf("Valor do lado: ");
    scanf(" %f", &lado);

    // Executa as operações
    perimetro = lado * 4;
    area = lado * lado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f\n", area);

    return 0;
}
