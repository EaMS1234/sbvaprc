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

int somatorio(int n)
{
    int somatorio = 0;

    for (int i = 1; i <= n; i++)
    {
        somatorio += i;
    }

    return somatorio;
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
        printf("Somatorio de 1 a %d: %d\n", n[i], somatorio(n[i]));
    }

    return 0;
}
