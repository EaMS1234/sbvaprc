#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float pi = 3.141592;
    float raio;

    // Operações
    float diametro;
    float circumferencia;
    float area;

    printf("Valor do raio do circulo: ");
    scanf(" %f", &raio);

    // Executa as operações
    diametro = raio * 2;
    circumferencia = raio * 2 * pi;
    area = pi * (raio * raio);

    printf("Diametro = %.2f\n", diametro);
    printf("Circumeferencia = %.2f\n", circumferencia);
    printf("Area = %.2f\n", area);

    return 0;
}
