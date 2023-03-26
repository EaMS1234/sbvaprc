#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valor
    int lado;

    // Operações
    int perimetro;
    int area;

    printf("Valor do lado: ");
    scanf(" %d", &lado);

    // Executa as operações
    perimetro = lado * 4;
    area = lado * lado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d\n", area);

    return 0;
}
