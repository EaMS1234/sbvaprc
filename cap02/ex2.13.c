#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float optativa;

    float media;

    printf("Nota Av. 1: ");
    scanf("%f", &nota1);

    printf("Nota Av. 2: ");
    scanf("%f", &nota2);

    printf("Nota Optativa: ");
    scanf("%f", &optativa);

    // Média padrão
    media = (nota1 + nota2) / 2;

    // Caso haja optativa...
    if (optativa >= 0 && nota1 >= nota2 && optativa >= nota2)
    {
        // ... e nota2 seja a mais baixa.
        media = (nota1 + optativa) / 2;
    }
    else if (optativa >= 0 && nota2 >= nota1 && optativa >= nota1)
    {
        // ... ea nota1 seja a mais baixa.
        media = (nota2 + optativa) / 2;
    }

    printf("Media: %.2f\n", media);

    if (media >= 6)
    {
        printf("Aprovado!\n");
    }
    else if (media < 4)
    {
        printf("Reprovado...\n");
    }
    else
    {
        printf("Exame.\n");
    }

    return 0;
}