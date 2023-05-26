#include <stdio.h>
#include <stdlib.h>

int buscar(const int *a, int n, int chave);

int main()
{
    int posicao;
    int chave;
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        printf("n[%d]: ", i);
        scanf("%d", &n[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &chave);

    posicao = buscar(n, 10, chave);

    if (posicao == -1)
    {
        printf("O valor %d nao foi encontrado.\n", chave);
    }
    else
    {
        printf("O valor %d foi encontrado na posicao %d.\n", chave, posicao);
    }

    return 0;
}

int buscar(const int *a, int n, int chave)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == chave)
        {
            return i;
        }
    }

    return -1;
}
