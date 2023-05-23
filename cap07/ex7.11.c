#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

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

int obtemDigito(int n)
{
    int digito = n % 10;

    return digito;
}

int obtemNumero(int n)
{
    int numero = n / 10;

    return numero;
}

bool numeroCorreto(int n)
{
    if (obtemDigito(n) == calculaDigito(obtemNumero(n)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int numero;

    printf("Numero: ");
    scanf("%d", &numero);

    printf("Numero completo: %d\n", numero);
    printf("Numero: %d\n", obtemNumero(numero));
    printf("Digito: %d\n", obtemDigito(numero));
    printf("Digito calculado: %d\n", calculaDigito(obtemNumero(numero)));

    if (numeroCorreto(numero))
    {
        printf("O numero fornecido esta correto!\n");
    }
    else
    {
        printf("O numero fornecido esta incorreto!\n");
    }

    return 0;
}
