#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float diagonalMaior;
    float diagonalMenor;
    float altura;

    // Operação
    float area;

    printf("Valor da diagonal maior: ");
    scanf(" %f", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf(" %f", &diagonalMenor);

    // Executa a operação
    area = (diagonalMaior * diagonalMenor) / 2;

    printf("Area = %.2f\n", area);

    return 0;
}
