#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int vermelho;
    int verde;
    int azul;
} Cor;

int getVermelho(const Cor *c);
int getVerde(const Cor *c);
int getAzul(const Cor *c);
Cor novaCor(int vermelho, int verde, int azul);

int main()
{
    int vermelho;
    int verde;
    int azul;

    Cor c;

    printf("Vermelho: ");
    scanf("%d", &vermelho);

    printf("Verde: ");
    scanf("%d", &verde);

    printf("Azul: ");
    scanf("%d", &azul);

    c = novaCor(vermelho, verde, azul);

    printf("Cor: rgb( %d, %d, %d )\n", c.vermelho, c.verde, c.azul);
    printf("getVermelho(): %d\n", getVermelho(&c));
    printf("getVerde(): %d\n", getVerde(&c));
    printf("getAzul(): %d\n", getAzul(&c));

    return 0;
}

int getVermelho(const Cor *c)
{
    return c->vermelho;
}

int getVerde(const Cor *c)
{
    return c->verde;
}

int getAzul(const Cor *c)
{
    return c->azul;
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
