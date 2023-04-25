#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdMaiores = 0;

    int entrada;

    int array[5];
    int arrayCopia[5];

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Copiar maiores que: ");
    scanf("%d", &entrada);

    // Copia os valores maiores que entrada
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > entrada)
        {
            // Usando esse método, não é preciso iniciar todos os valores de 'arrayCopia'
            // para que os números sejam copiados e também pode-se utilizar qualquer
            // número inteiro para array[i] sem que ele seja ignorado.

            arrayCopia[qtdMaiores] = array[i];
            qtdMaiores++;
        }
    }

    if (qtdMaiores > 0)
    {
        // Se copiou ...

        for (int i = 0; i < qtdMaiores; i++)
        {
            printf("arrayCopia[%d] = %d\n", i, arrayCopia[i]);
        }
    }
    else
    {
        printf("Nao houve copia!");
    }

    return 0;
}
