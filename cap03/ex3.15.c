#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int fatorial = 1; // Fatorial de 'numero'

    printf("Numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        for (int i = 1; i <= numero; i++)
        {
            fatorial = fatorial * i;
        }

        printf("%d! = %d\n", numero, fatorial);
    }
    else
    {
        printf("Nao ha fatorial de numero negativo.\n");
    }

    return 0;
}
