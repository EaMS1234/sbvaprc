#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Valores
    int altura;
    int largura;

    // Operações
    int perimetro;
    int area;

    printf("Valor da largura: ");
    scanf(" %d", &largura);

    printf("Valor da altura: ");
    scanf(" %d", &altura);

    // Executa as operações
    perimetro = (2 * largura) + (2 * altura);
    area = largura * altura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d\n", area);

    return 0;
}
