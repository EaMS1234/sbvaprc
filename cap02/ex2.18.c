#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1;
    float numero2;
    char opcao;

    printf("N1: ");
    scanf("%f", &numero1);

    printf("N2: ");
    scanf("%f", &numero2);

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("    +) Adicao;\n");
    printf("    -) Subtracao;\n");
    printf("    *) Multiplicacao;\n");
    printf("    /) Divisao.\n");
    printf("Operacao: ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", numero1, numero2, (numero1 + numero2));
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n", numero1, numero2, (numero1 - numero2));
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n", numero1, numero2, (numero1 * numero2));
        break;

    case '/':
        printf("%.2f / %.2f = %.2f\n", numero1, numero2, (numero1 / numero2));
        break;

    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}
