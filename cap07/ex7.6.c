#include <stdio.h>
#include <stdlib.h>

int lePositivo()
{
    int numero;

    while (1)
    {
        scanf("%d", &numero);

        if (numero < 0)
        {
            printf("Entre com um valor positivo: ");
        }
        else
        {
            return numero;
        }
    }
}

int somaDivisores(int n)
{
    int soma = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }

    return soma;
}

int main()
{
    int n[5];

    for (int i = 0; i < 5; i++)
    {
        printf("n[%d]: ", i);
        n[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Soma dos divisores de %d: %d\n", n[i], somaDivisores(n[i]));
    }

    return 0;
}
