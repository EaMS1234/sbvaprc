#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor(int vermelho, int verde, int azul);
Cor clarear(const Cor *c);

int main()
{
    int vermelho;
    int verde;
    int azul;

    Cor c;
    Cor escura;

    printf("Vermelho: ");
    scanf("%d", &vermelho);

    printf("Verde: ");
    scanf("%d", &verde);

    printf("Azul: ");
    scanf("%d", &azul);

    c = novaCor(vermelho, verde, azul);
    escura = clarear(&c);

    printf("Cor base: rgb( %d, %d, %d )\n", c.vermelho, c.verde, c.azul);
    printf("Cor escurecida: rgb( %d, %d, %d )\n", escura.vermelho, escura.verde, escura.azul);

    return 0;
}

Cor novaCor(int vermelho, int verde, int azul)
{
    Cor c;

    // Valida os valores para ...

    // ... Vermelho
    if (vermelho > 0 && vermelho <= 255)
    {
        c.vermelho = vermelho;
    }
    else if (vermelho <= 0)
    {
        c.vermelho = 0;
    }
    else
    {
        c.vermelho = 255;
    }

    // ... Verde
    if (verde > 0 && verde <= 255)
    {
        c.verde = verde;
    }
    else if (verde <= 0)
    {
        c.verde = 0;
    }
    else
    {
        c.verde = 255;
    }

    // ... Azul
    if (azul > 0 && azul <= 255)
    {
        c.azul = azul;
    }
    else if (azul <= 0)
    {
        c.azul = 0;
    }
    else
    {
        c.azul = 255;
    }

    return c;
}

Cor clarear(const Cor *c)
{
    Cor cor = {
        trunc(c->vermelho * 0.7),
        trunc(c->verde * 0.7),
        trunc(c->azul * 0.7)};

    return cor;
}
