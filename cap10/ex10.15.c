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
bool intercepta(const Retangulo *r1, const Retangulo *r2);

int main()
{
    Ponto sEsq;
    Ponto iDir;

    Retangulo r[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Retangulo %d\n", i + 1);
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

        r[i] = novoRetangulo(&sEsq, &iDir);
    }

    if (intercepta(&r[0], &r[1]))
    {
        printf("Os retangulos se interceptam!\n");
    }
    else
    {
        printf("Os retangulos nao se interceptam!\n");
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

bool intercepta(const Retangulo *r1, const Retangulo *r2)
{
    int xMax = r1->iDir.x >= r1->sEsq.x ? r1->iDir.x : r1->sEsq.x;
    int xMin = r1->iDir.x <= r1->sEsq.x ? r1->iDir.x : r1->sEsq.x;
    int yMax = r1->iDir.y >= r1->sEsq.y ? r1->iDir.y : r1->sEsq.y;
    int yMin = r1->iDir.y <= r1->sEsq.y ? r1->iDir.y : r1->sEsq.y;

    if (r2->iDir.x <= xMax && r2->iDir.x >= xMin &&
        r2->iDir.y <= yMax && r2->iDir.y >= yMin)
    {
        // r2->iDir está dentro de r1

        return true;
    }
    else if (r2->sEsq.x <= xMax && r2->sEsq.x >= xMin &&
             r2->sEsq.y <= yMax && r2->sEsq.y >= yMin)
    {
        // r2->sEsq está dentro de r1

        return true;
    }
    else if (r2->sEsq.x <= r1->sEsq.x && r2->sEsq.y >= r1->sEsq.y &&
             r2->iDir.x >= r1->iDir.x && r2->iDir.y >= r1->iDir.y &&
             r2->iDir.y <= r1->sEsq.y)
    {
        // Intercepta por cima

        return true;
    }
    else if (r2->sEsq.x <= r1->sEsq.x && r2->sEsq.y <= r1->sEsq.y &&
             r2->sEsq.y >= r1->iDir.y && r2->iDir.x >= r1->iDir.x &&
             r2->iDir.y <= r1->iDir.y)
    {
        // Intercepta por baixo

        return true;
    }
    else if (r2->sEsq.x <= r1->sEsq.x && r2->sEsq.y >= r1->sEsq.y &&
             r2->iDir.x >= r1->sEsq.x && r2->iDir.y <= r1->iDir.y)
    {
        // Intercepta pelo canto superior esuqerdo

        return true;
    }
    else
    {
        return false;
    }
}
