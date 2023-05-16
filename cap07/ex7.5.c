#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

bool ehPar(int n)
{
    return n % 2 == 0 ? true : false;
}

bool ehDivisivel(int dividendo, int divisor)
{
    return dividendo % divisor == 0 ? true : false;
}

int main()
{
    int n1[5];
    int n2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d eh ", n1[i]);

        if (ehPar(n1[i]))
        {
            printf("par ");
        }
        else
        {
            printf("impar ");
        }

        printf("e %d ", n1[i]);

        if (ehDivisivel(n1[i], n2[i]))
        {
            printf("eh ");
        }
        else
        {
            printf("nao eh ");
        }

        printf("divisivel por %d\n", n2[i]);
    }

    return 0;
}
