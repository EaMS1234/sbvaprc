#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float n1, float n2);

int main()
{
    float n1[5];
    float n2[5];

    for (int i = 0; i < 5; i++)
    {
        while (1)
        {
            printf("n1[%d]: ", i);
            scanf("%f", &n1[i]);

            if (n1[i] < 0)
            {
                printf("Entre com um valor positivo!\n");
            }
            else
            {
                break;
            }
        }

        while (1)
        {
            printf("n2[%d]: ", i);
            scanf("%f", &n2[i]);

            if (n2[i] < 0)
            {
                printf("Entre com um valor positivo!\n");
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f, %.2f: ", n1[i], n2[i]);

        if (n1[i] == n2[i])
        {
            printf("Eles sao iguais\n");
        }
        else
        {
            printf("O maior valor e %.2f\n", maiorNumero(n1[i], n2[i]));
        }
    }

    return 0;
}

float maiorNumero(float n1, float n2)
{
    if (n1 >= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
