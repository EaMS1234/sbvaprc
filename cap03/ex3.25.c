#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0;
    int quantidade = 0;
    float somatorio = 0;
    float media = 0;

    while (valor >= 0)
    {
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        if (valor >= 0)
        {
            somatorio += valor;
            quantidade++;
        }
    }

    // Previne a média de receber valores inexistentes
    if (quantidade > 0)
    {
        media = somatorio / quantidade;
    }

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", quantidade);

    return 0;
}
