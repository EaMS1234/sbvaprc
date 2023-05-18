#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

bool ehPrimo(int n)
{
    int divisores = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    return divisores == 1 ? true : false;
}

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (ehPrimo(i))
        {
            printf("%d: eh primo\n", i);
        }
        else
        {
            printf("%d: nao eh primo\n", i);
        }
    }

    return 0;
}
