#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Ponto;

typedef struct
{
    Ponto sEsq;
    Ponto iDir;
} Retangulo;

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir);
int calcularArea(const Retangulo *r);
void imprimirRetangulo(const Retangulo *r);

int main()
{
    Ponto sEsq;
    Ponto iDir;

    Retangulo r;

    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &sEsq.x);
    printf("    y: ");
    scanf("%d", &sEsq.y);

    printf("Ponto infeior direito\n");
    printf("    x: ");
    scanf("%d", &iDir.x);
    printf("    y: ");
    scanf("%d", &iDir.y);

    r = novoRetangulo(&sEsq, &iDir);

    imprimirRetangulo(&r);
    printf("Area: %d", calcularArea(&r));

    return 0;
}

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir)
{
    Retangulo r;

    r.sEsq.x = sEsq->x;
    r.sEsq.y = sEsq->y;
    r.iDir.x = iDir->x;
    r.iDir.y = iDir->y;

    return r;
}

int calcularArea(const Retangulo *r)
{
    return abs(r->sEsq.x - r->iDir.x) * abs(r->sEsq.y - r->iDir.y);
}

void imprimirRetangulo(const Retangulo *r)
{
    if (r->sEsq.x >= 0)
    {
        printf("(+%02d", r->sEsq.x);
    }
    else
    {
        printf("(%02d", r->sEsq.x);
    }
    if (r->sEsq.y >= 0)
    {
        printf(", +%02d)", r->sEsq.y);
    }
    else
    {
        printf(", %02d)", r->sEsq.y);
    }
    printf(" =====|\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|===== ");
    if (r->iDir.x >= 0)
    {
        printf("(+%02d", r->iDir.x);
    }
    else
    {
        printf("(%02d", r->iDir.x);
    }
    if (r->iDir.y >= 0)
    {
        printf(", +%02d)\n", r->iDir.y);
    }
    else
    {
        printf(", %02d)\n", r->iDir.y);
    }
}
