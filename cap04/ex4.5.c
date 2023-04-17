#include <stdio.h>
#include <stdlib.h>

int main()
{
    int busca;
    int ocorrencias = 0;

    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%i", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &busca);

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == busca)
        {
            ocorrencias += 1;
        }
    }

    switch (ocorrencias)
    {
    case 0:
        printf("O array nao contem o valor %d.\n", busca);
        break;

    case 1:
        printf("O array contem 1 ocorrencia do valor %d.\n", busca);
        break;

    default:
        printf("O array contem %d ocorrencias do valor %d.\n", ocorrencias, busca);
    }

    return 0;
}
