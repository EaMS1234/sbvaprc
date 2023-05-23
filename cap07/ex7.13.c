#include <stdio.h>
#include <stdlib.h>

void classificaTrinca(int n1, int n2, int n3)
{
    int maior;
    int meio;
    int menor;

    printf("%d, %d e %d: ", n1, n2, n3);

    if (n1 >= n2 && n1 >= n3)
    {
        maior = n1;
        meio = n2 >= n3 ? n2 : n3;
        menor = n2 >= n3 ? n3 : n2;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        maior = n2;
        meio = n1 >= n3 ? n1 : n3;
        menor = n1 >= n3 ? n3 : n1;
    }
    else
    {
        maior = n3;
        meio = n1 >= n2 ? n1 : n2;
        menor = n1 >= n2 ? n2 : n1;
    }

    printf("%d <= %d <= %d\n", menor, meio, maior);
}

int main()
{
    int n1[3];
    int n2[3];
    int n3[3];

    for (int i = 0; i < 3; i++)
    {
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n3[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        classificaTrinca(n1[i], n2[i], n3[i]);
    }

    return 0;
}
