#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int base;
    int altura;

    // Operação
    int area;

    printf("Valor da base: ");
    scanf(" %d", &base);

    printf("Valor da altura: ");
    scanf(" %d", &altura);

    // Executa a operação
    area = (base * altura) / 2;

    printf("Area = %d\n", area);

    return 0;
}
