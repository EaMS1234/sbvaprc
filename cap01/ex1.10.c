#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int baseMaior;
    int baseMenor;
    int altura;

    // Operação
    int area;

    printf("Valor da base maior: ");
    scanf(" %d", &baseMaior);

    printf("Valor da base menor: ");
    scanf(" %d", &baseMenor);

    printf("Valor da altura: ");
    scanf(" %d", &altura);

    // Executa a operação
    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area = %d\n", area);

    return 0;
}
