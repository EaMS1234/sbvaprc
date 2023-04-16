#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0;
    int quantidade = 0;
    int maiornumero = 0;
    int menornumero = 0;

    while (valor >= 0)
    {
        printf("Entre com um valor: ");
        scanf("%d", &valor);

        if (valor >= 0)
        {
            if (quantidade == 0)
            {
                maiornumero = valor;
                menornumero = valor;
            }
            else if (valor >= maiornumero)
            {
                maiornumero = valor;
            }
            else if (valor <= menornumero)
            {
                menornumero = valor;
            }
        }

        quantidade++;
    }

    printf("Menor numero: %d\n", menornumero);
    printf("Maior numero: %d\n", maiornumero);

    return 0;
}
