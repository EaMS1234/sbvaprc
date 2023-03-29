#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &numero);

    if (numero > 3999 || numero < 1)
    {
        printf("Numero incorreto!\n");
    }
    else
    {
        printf("%d = ", numero);

        int milhares = numero / 1000;
        int centenas = (numero - (milhares * 1000)) / 100;
        int dezenas = (numero - (milhares * 1000) - (centenas * 100)) / 10;
        int unidades = (numero - (milhares * 1000) - (centenas * 100) - (dezenas * 10));

        // Cálculo para os milhares
        if (milhares == 3)
        {
            printf("MMM");
        }
        else if (milhares == 2)
        {
            printf("MM");
        }
        else if (milhares == 1)
        {
            printf("M");
        }

        // Cálculo para as centenas
        if (centenas == 9)
        {
            printf("CM");
        }
        else
        {
            // Mostra o 500 e então subtrai
            if (centenas >= 5)
            {
                printf("D");
                centenas -= 5;
            }

            // Mostra o que sobrou
            if (centenas == 4)
            {
                printf("CD");
            }
            else if (centenas == 3)
            {
                printf("CCC");
            }
            else if (centenas == 2)
            {
                printf("CC");
            }
            else if (centenas == 1)
            {
                printf("C");
            }
        }

        // Cálculo para as dezenas
        if (dezenas == 9)
        {
            printf("XC");
        }
        else
        {
            // Mostra o 50 e então subtrai
            if (dezenas >= 5)
            {
                printf("L");
                dezenas - 5;
            }

            // Mostra o que sobrou
            if (dezenas == 4)
            {
                printf("XL");
            }
            else if (dezenas == 3)
            {
                printf("XXX");
            }
            else if (dezenas == 2)
            {
                printf("XX");
            }
            else if (dezenas == 1)
            {
                printf("X");
            }
        }

        // Cálculo para as unidades
        if (unidades == 9)
        {
            printf("IX");
        }
        else
        {
            // Mostra o 5 e então subtrai
            if (unidades >= 5)
            {
                printf("V");
                unidades -= 5;
            }

            // Mostra o que sobrou
            if (unidades == 4)
            {
                printf("IV");
            }
            else if (unidades == 3)
            {
                printf("III");
            }
            else if (unidades == 2)
            {
                printf("II");
            }
            else if (unidades == 1)
            {
                printf("I");
            }
        }

        printf("\n");
    }

    return 0;
}
