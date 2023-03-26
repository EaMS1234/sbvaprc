#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int diagonalMaior;
    int diagonalMenor;
    int altura;

    // Operação
    int area;

    printf("Valor da diagonal maior: ");
    scanf(" %d", &diagonalMaior);

    printf("Valor da diagonal menor: ");
    scanf(" %d", &diagonalMenor);

    // Executa a operação
    area = (diagonalMaior * diagonalMenor) / 2;

    printf("Area = %d\n", area);

    return 0;
}
