#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Entrada
    int homem1;
    int homem2;
    int mulher1;
    int mulher2;

    // Valores a serem estipulados
    int homemMaisVelho;
    int homemMaisNovo;
    int mulherMaisVelha;
    int mulherMaisNova;

    printf("Idade Homem 1: ");
    scanf("%d", &homem1);

    printf("Idade Homem 2: ");
    scanf("%d", &homem2);

    printf("Idade Mulher 1: ");
    scanf("%d", &mulher1);

    printf("Idade Mulher 2: ");
    scanf("%d", &mulher2);

    if (homem1 >= homem2)
    {
        homemMaisVelho = homem1;
        homemMaisNovo = homem2;
    }
    else
    {
        homemMaisVelho = homem2;
        homemMaisNovo = homem1;
    }

    if (mulher1 >= mulher2)
    {
        mulherMaisVelha = mulher1;
        mulherMaisNova = mulher2;
    }
    else
    {
        mulherMaisVelha = mulher2;
        mulherMaisNova = mulher1;
    }

    printf("Idade homem mais velho + idade mulher mais nova: %d\n", homemMaisVelho + mulherMaisNova);
    printf("Idade homem mais novo * idade mulher mais velha: %d\n", homemMaisNovo * mulherMaisVelha);

    return 0;
}
