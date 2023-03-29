#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeiroNumero;
    float segundoNumero;

    printf("Entre com um numero: ");
    scanf("%f", &primeiroNumero);

    printf("Entre com outro numero: ");
    scanf("%f", &segundoNumero);

    if (primeiroNumero + segundoNumero > 10)
    {
        printf("Os numeros fornecidos foram %.2f e %.2f\n",
               primeiroNumero, segundoNumero);
    }
    else
    {
        printf("A subtracao entre %.2f e %.2f e igual a %.2f\n",
               primeiroNumero, segundoNumero,
               primeiroNumero - segundoNumero);
    }

    return 0;
}
