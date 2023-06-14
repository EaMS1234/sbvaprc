#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int vermelho;
    int verde;
    int azul;
} Cor;

void setVermelho(Cor *c, int vermelho);
void setVerde(Cor *c, int verde);
void setAzul(Cor *c, int azul);
Cor novaCor(int vermelho, int verde, int azul);

int main()
{
    int vermelho;
    int verde;
    int azul;

    int novoVermelho;
    int novoVerde;
    int novoAzul;

    Cor c;

    printf("Vermelho: ");
    scanf("%d", &vermelho);

    printf("Verde: ");
    scanf("%d", &verde);

    printf("Azul: ");
    scanf("%d", &azul);

    printf("Novo vermelho: ");
    scanf("%d", &novoVermelho);

    printf("Novo verde: ");
    scanf("%d", &novoVerde);

    printf("novo azul: ");
    scanf("%d", &novoAzul);

    c = novaCor(vermelho, verde, azul);
    printf("Cor: rgb( %d, %d, %d )\n", c.vermelho, c.verde, c.azul);

    setVermelho(&c, novoVermelho);
    setVerde(&c, novoVerde);
    setAzul(&c, novoAzul);

    printf("Cor alterada: rgb( %d, %d, %d )\n", c.vermelho, c.verde, c.azul);

    return 0;
}

void setVermelho(Cor *c, int vermelho)
{
    if (vermelho > 0 && vermelho <= 255)
    {
        c->vermelho = vermelho;
    }
    else if (vermelho <= 0)
    {
        c->vermelho = 0;
    }
    else
    {
        c->vermelho = 255;
    }
}

void setVerde(Cor *c, int verde)
{
    if (verde > 0 && verde <= 255)
    {
        c->verde = verde;
    }
    else if (verde <= 0)
    {
        c->verde = 0;
    }
    else
    {
        c->verde = 255;
    }
}

void setAzul(Cor *c, int azul)
{
    if (azul > 0 && azul <= 255)
    {
        c->azul = azul;
    }
    else if (azul <= 0)
    {
        c->azul = 0;
    }
    else
    {
        c->azul = 255;
    }
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
