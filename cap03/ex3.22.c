#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    printf("N3: ");
    scanf("%d", &n3);

    printf("N4: ");
    scanf("%d", &n4);

    printf("N5: ");
    scanf("%d", &n5);

    if (n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0 && n5 > 0)
    {
        for (int i = 10; i > 0; i--)
        {
            printf("%04d  ", i);

            // Asteriscos
            if (n1 >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if (n2 >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if (n3 >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if (n4 >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            if (n5 >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            // Pula a linha
            printf("\n");
        }
    }
    else
    {
        printf("Forneca apenas numeros positivos.\n");
    }

    return 0;
}
