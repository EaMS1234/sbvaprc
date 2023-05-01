#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaAtual = 0;
    float media = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Nota %02d: ", i);
        scanf("%f", &notaAtual);

        media += notaAtual;
    }

    // Calcula a média
    media = media / 10;

    printf("A media aritmetica das dez notas e: %.2f", media);

    return 0;
}
