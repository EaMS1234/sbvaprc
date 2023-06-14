#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

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
bool contem(const Retangulo *r, const Ponto *p);

int main()
{
    Ponto sEsq;
    Ponto iDir;

    Ponto p[5];

    Retangulo r;

    printf("Retangulo\n");
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

    printf("Pontos\n");
    for (int i = 0; i < 5; i++)
    {
        printf("  Ponto %d", i + 1);
        printf("    x: ");
        scanf("%d", &p[i].x);
        printf("    y: ");
        scanf("%d", &p[i].y);
    }

    for (int i = 0; i < 5; i++)
    {
        if (p[i].x >= 0)
        {
            printf("(+%d, ", p[i].x);
        }
        else
        {
            printf("(%d, ", p[i].x);
        }
        if (p[i].y >= 0)
        {
            printf("+%d): ", p[i].y);
        }
        else
        {
            printf("%d): ", p[i].y);
        }

        if (contem(&r, &p[i]))
        {
            printf("contido!\n");
        }
        else
        {
            printf("nao contido!\n");
        }
    }

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

bool contem(const Retangulo *r, const Ponto *p)
{
    int xMax = r->iDir.x >= r->sEsq.x ? r->iDir.x : r->sEsq.x;
    int xMin = r->iDir.x <= r->sEsq.x ? r->iDir.x : r->sEsq.x;
    int yMax = r->iDir.y >= r->sEsq.y ? r->iDir.y : r->sEsq.y;
    int yMin = r->iDir.y <= r->sEsq.y ? r->iDir.y : r->sEsq.y;

    if (p->x <= xMax && p->x >= xMin &&
        p->y <= yMax && p->y >= yMin)
    {

        return true;
    }

    return false;
}
