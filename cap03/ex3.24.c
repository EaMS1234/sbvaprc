#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int idade = 0;
    int menor21 = 0; // Pessoas menores que 21
    int maior50 = 0; // Pessoas maiores que 50

    while (idade >= 0)
    {
        printf("Idade da pessoa %02d: ", contador);
        scanf("%d", &idade);

        if (idade < 21 && idade >= 0)
        {
            menor21++;
        }
        else if (idade > 50)
        {
            maior50++;
        }

        contador++;
    }

    printf("Total de pessoas menores de 21 anos: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d\n", maior50);

    return 0;
}
