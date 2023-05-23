#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente);

int main()
{
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        imprimeDuplaClassificada(n1[i], n2[i], 1 - (i % 2));
    }

    return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente)
{
    int maior = n1 >= n2 ? n1 : n2;
    int menor = n1 >= n2 ? n2 : n1;

    printf("%d e %d: ", n1, n2);

    if (emOrdemCrescente)
    {
        printf("%d <= %d\n", menor, maior);
    }
    else
    {
        printf("%d >= %d\n", maior, menor);
    }
}
