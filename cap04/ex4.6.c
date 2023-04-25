#include <stdio.h>
#include <stdlib.h>

int main()
{
    int busca;
    int qtd = 0;

    int array[5];
    int posArray[5];

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &busca);

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == busca)
        {
            posArray[qtd] = i;
            qtd++;
        }
    }

    if (qtd == 0)
    {
        printf("O array nao contem o valor %d.\n", busca);
    }
    else if (qtd == 1)
    {
        printf("O valor %d foi encontrado no indice %d do array.\n", busca, posArray[0]);
    }
    else
    {
        printf("O valor %d foi encontrado nos indices ", busca);

        for (int i = 0; i < qtd; i++)
        {
            if (posArray[i] != -1)
            {
                if (qtd - 2 == i)
                {
                    printf("%d e ", posArray[i]);
                }
                else if (qtd - 1 == i)
                {
                    printf("%d do array.\n", posArray[i]);
                }
                else
                {
                    printf("%d, ", posArray[i]);
                }
            }
        }
    }

    return 0;
}
