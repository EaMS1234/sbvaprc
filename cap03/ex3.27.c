#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso = 0;
    float maiorPeso = 0;
    float media = 0;           // Média de todos os pesos acima de 60
    float somatorio60 = 0; // Somatório de todos os pesos acima de 60
    int quantidade60 = 0;  // Quantidade de pesos acima de 60
    int quantidade = 1;

    while (peso >= 0)
    {
        printf("Entre com o peso da pessoa %02d: ", quantidade);
        scanf("%f", &peso);

        if (peso >= 0)
        {
            if (peso >= maiorPeso)
            {
                maiorPeso = peso;
            }

            if (peso > 60)
            {
                somatorio60 += peso;
                quantidade60++;
            }
        }

        quantidade++;
    }

    // Evita a divisão por 0
    if (quantidade60 > 0)
    {
        media = somatorio60 / quantidade60;
    }

    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg\n", maiorPeso);

    return 0;
}
