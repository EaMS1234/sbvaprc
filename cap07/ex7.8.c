#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

int lePositivo();
int somaDivisores(int n);
bool saoAmigos(int n1, int n2);

int main()
{
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("n1[%d]: ", i);
        n1[i] = lePositivo();

        printf("n2[%d]: ", i);
        n2[i] = lePositivo();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d e %d ", n1[i], n2[i]);

        if (saoAmigos(n1[i], n2[i]))
        {
            printf("sao amigos\n");
        }
        else
        {
            printf("nao sao amigos\n");
        }
    }

    return 0;
}

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

bool saoAmigos(int n1, int n2)
{
    if (somaDivisores(n1) == n2 && somaDivisores(n1) == n2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
