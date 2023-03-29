#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valores
    int n1;
    int n2;
    int n3;

    // Posições
    int maior;
    int meio;
    int menor;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3 && n2 >= n3)
    {
        // n1 > n2 > n3
        maior = n1;
        meio = n2;
        menor = n3;
    }
    else if (n1 >= n2 && n1 >= n3 && n3 >= n2)
    {
        // n1 > n3 > n2
        maior = n1;
        meio = n3;
        menor = n2;
    }
    else if (n2 >= n1 && n2 >= n3 && n1 >= n3)
    {
        // n2 > n1 > n3
        maior = n2;
        meio = n1;
        menor = n3;
    }
    else if (n2 >= n1 && n2 >= n3 && n3 >= n1)
    {
        // n2 > n3 > n1
        maior = n2;
        meio = n3;
        menor = n1;
    }
    else if (n3 >= n1 && n3 >= n2 && n1 >= n2)
    {
        // n3 > n1 > n2
        maior = n3;
        meio = n1;
        menor = n2;
    }
    else
    {
        // n3 > n2 > n1
        maior = n3;
        meio = n2;
        menor = n1;
    }

    // Finalmente
    printf("%d >= %d >= %d\n", maior, meio, menor);

    return 0;
}
