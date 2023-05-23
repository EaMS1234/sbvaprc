#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi acos(-1)

float areaCirculo(float raio);
float circunferenciaCirculo(float raio);

int main()
{
    float raio;

    printf("Raio: ");
    scanf("%f", &raio);

    printf("Area = %.2f\n", areaCirculo(raio));
    printf("Circunferencia = %.2f\n", circunferenciaCirculo(raio));

    return 0;
}

float areaCirculo(float raio)
{
    return (pi * (raio * raio));
}

float circunferenciaCirculo(float raio)
{
    return (2 * pi * raio);
}
