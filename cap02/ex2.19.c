#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura;
    char opcao;

    printf("Escolha uma operacao de acordo com o menu:\n");
    printf("    C) Celsius -> Fahrenheit;\n");
    printf("    F) Fahrenheit -> Celsius.\n");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case 'C':
        printf("Entre com a temperatura em graus Celsius: ");
        scanf("%f", &temperatura);

        // Fahrenheit
        float far = (temperatura * 1.8) + 32;

        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit\n",
               temperatura, far);

        break;

    case 'F':
        printf("Entre com a temperatura em graus Fahrenheit: ");
        scanf("%f", &temperatura);

        // Celsius
        float cel = (temperatura - 32) / 1.8;

        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius\n",
               temperatura, cel);

        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
