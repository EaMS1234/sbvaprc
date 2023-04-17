#include <stdio.h>
#include <stdlib.h>

int main()
{
    int busca;

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
        printf("Indice %d: ", i);

        if (array[i] == busca)
        {
            printf("ACHEI\n");
        }
        else
        {
            printf("NAO ACHEI\n");
        }
    }

    return 0;
}
