#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Números
    float n1;
    float n2;
    float n3;

    // Posições
    float maior;
    float meio;

    printf("N1: ");
    scanf("%f", &n1);

    printf("N2: ");
    scanf("%f", &n2);

    printf("N3: ");
    scanf("%f", &n3);

    if (n1 >= n2 && n1 >= n3 && n2 >= n3)
    {
        // n1 > n2 > n3
        maior = n1;
        meio = n2;
    }
    else if (n1 >= n2 && n1 >= n3 && n3 >= n2)
    {
        // n1 > n3 > n2
        maior = n1;
        meio = n3;
    }
    else if (n2 >= n1 && n2 >= n3 && n1 >= n3)
    {
        // n2 > n1 > n3
        maior = n2;
        meio = n1;
    }
    else if (n2 >= n1 && n2 >= n3 && n3 >= n1)
    {
        // n2 > n3 > n1
        maior = n2;
        meio = n3;
    }
    else if (n3 >= n1 && n3 >= n2 && n1 >= n2)
    {
        // n3 > n1 > n2
        maior = n3;
        meio = n1;
    }
    else
    {
        // n3 > n2 > n1
        maior = n3;
        meio = n2;
    }

    printf("A soma dos dois numeros maiores fornecidos e %.2f\n",
           maior + meio);

    return 0;
}
