#include <stdio.h>
#include <stdlib.h>

int calculaDigito(int n)
{
    int verificador = 0;

    int milhares = n / 1000;
    int centenas = (n - (milhares * 1000)) / 100;
    int dezenas = (n - (milhares * 1000) - (centenas * 100)) / 10;
    int unidades = (n - (milhares * 1000) - (centenas * 100) - (dezenas * 10));

    verificador = 11 - (((unidades * 2) + (dezenas * 3) +
                         (centenas * 4) + (milhares * 5)) %
                        11);

    return verificador >= 10 ? 0 : verificador;
}

int main()
{
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Digito verificador de %d: %d\n", numero, calculaDigito(numero));

    return 0;
}
