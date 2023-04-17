#include <stdio.h>
#include <stdlib.h>

int main()
{
    float somatorio = 0;
    float produtorio = 1;

    float array[5];

    // Lê os números
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);

        somatorio += array[i];
        produtorio *= array[i];
    }

    printf("Somatorio: %.2f\n", somatorio);
    printf("Produtorio: %.2f\n", produtorio);

    return 0;
}
