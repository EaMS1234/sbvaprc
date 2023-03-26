#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    float pi = 3.141592;
    float raio;

    // Operações
    float diametro;
    float circunferencia;
    float area;

    printf("Valor do raio do circulo: ");
    scanf(" %f", &raio);

    // Executa as operações
    diametro = raio * 2;
    circunferencia = raio * 2 * pi;
    area = pi * (raio * raio);

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f\n", area);

    return 0;
}
