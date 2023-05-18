#include <stdio.h>
#include <stdlib.h>

int calculaDigito(int n)
{
    int contador = 1000;
    int verificador = 0;

    while (contador >= 1 && n / contador >= 1)
    {
        

        contador / 10;
    }

    return verificador;
}

int main()
{
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Digito verificador de %d: %d\n", numero, calculaDigito(numero));

    return 0;
}
