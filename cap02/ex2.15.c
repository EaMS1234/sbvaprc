#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if (idade < 65 && idade >= 18)
    {
        printf("Eleitor obrigatorio.\n");
    }
    else if (idade < 16)
    {
        printf("Nao eleitor.\n");
    }
    else
    {
        printf("Eleitor facultativo.\n");
    }

    return 0;
}
