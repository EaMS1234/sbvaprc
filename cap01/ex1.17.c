#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float baseMaior;
    float baseMenor;
    float altura;

    // Operação
    float area;

    printf("Valor da base maior: ");
    scanf(" %f", &baseMaior);

    printf("Valor da base menor: ");
    scanf(" %f", &baseMenor);

    printf("Valor da altura: ");
    scanf(" %f", &altura);

    // Executa a operação
    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area = %.2f\n", area);

    return 0;
}
