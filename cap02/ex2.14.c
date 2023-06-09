#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Valor
    float altura;
    float peso;

    // Operações
    float imc;

    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 17)
    {
        printf("Voce esta muito abaixo do peso ideal!\n");
    }
    else if (imc >= 17 && imc < 18.5)
    {
        printf("Voce esta abaixo do peso ideal!\n");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Parabens! Voce esta em seu peso normal!\n");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!\n");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Cuidado! Obesidade grau I!\n");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Cuidado! Obesidade grau II!\n");
    }
    else
    {
        printf("Cuidado! Obesidade grau III!\n");
    }

    return 0;
}
