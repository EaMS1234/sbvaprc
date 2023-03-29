#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;

    printf("Entre com um valor: ");
    scanf("%f", &numero);

    if (numero > 20)
    {
        printf("A metade de %.2f e %.2f\n", numero, numero / 2);
    }
    else
    {
        printf("O triplo de %.2f e %.2f\n", numero, numero * 3);
    }

    return 0;
}
