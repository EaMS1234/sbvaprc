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
void imprimirRetangulo(const Retangulo *r);
void mover(Retangulo *r, int x, int y);

int main()
{
    int x;
    int y;

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

    printf("Mover em x: ");
    scanf("%d", &x);

    printf("Mover em y: ");
    scanf("%d", &y);

    r = novoRetangulo(&sEsq, &iDir);

    printf("Retangulo original:\n");
    imprimirRetangulo(&r);

    mover(&r, x, y);

    printf("Retangulo movido:\n");
    imprimirRetangulo(&r);

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

void imprimirRetangulo(const Retangulo *r)
{
    if (r->sEsq.x >= 0)
    {
        printf("(+%0d", r->sEsq.x);
    }
    else
    {
        printf("(%0d", r->sEsq.x);
    }
    if (r->sEsq.y >= 0)
    {
        printf(", +%0d)", r->sEsq.y);
    }
    else
    {
        printf(", %0d)", r->sEsq.y);
    }
    printf(" =====|\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|===== ");
    if (r->iDir.x >= 0)
    {
        printf("(+%0d", r->iDir.x);
    }
    else
    {
        printf("(%0d", r->iDir.x);
    }
    if (r->iDir.y >= 0)
    {
        printf(", +%0d)\n", r->iDir.y);
    }
    else
    {
        printf(", %0d)\n", r->iDir.y);
    }
}

void mover(Retangulo *r, int x, int y)
{
    r->sEsq.x += x;
    r->sEsq.y += y;
    r->iDir.x += x;
    r->iDir.y += y;
}
