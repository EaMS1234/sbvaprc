#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo;
    float entrada;
    int opcao = 0;

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    while (opcao != 3)
    {
        printf("Operacoes: \n");
        printf("    1) Deposito;\n");
        printf("    2) Saque;\n");
        printf("    3) Fim.\n");
        printf("Operacao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Valor a depositar: ");
            scanf("%f", &entrada);

            saldo += entrada;

            break;

        case 2:
            printf("Valor a sacar: ");
            scanf("%f", &entrada);

            saldo -= entrada;

            break;

        default:
            if (saldo < 0)
            {
                printf("Saldo final: -R$%.2f\n", saldo * -1);
                printf("Conta devedora.\n");
            }
            else
            {
                printf("Saldo final: R$%.2f\n", saldo);

                if (saldo == 0)
                {
                    printf("Sem saldo.\n");
                }
                else
                {
                    printf("Conta preferencial.\n");
                }
            }

            break;
        }
    }

    return 0;
}
