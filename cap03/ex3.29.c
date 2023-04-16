#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    char resposta;

    do
    {
        printf("N1: ");
        scanf("%d", &n1);

        printf("N2: ");
        scanf("%d", &n2);

        while (n2 == 0)
        {
            printf("Nao existe divisao inteira por zero!\n");

            printf("Entre novamente com N2: ");
            scanf("%d", &n2);
        }

        printf("%d / %d = %d\n", n1, n2, (n1 / n2));

        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &resposta);
    } while (resposta != 'N');

    return 0;
}
