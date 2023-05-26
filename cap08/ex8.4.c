#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

void decompoeData(int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano);

int main()
{
    int dia;
    int mes;
    int ano;
    int diaDoAno;

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);

    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaDoAno, ano, &mes, &dia);

    printf("O dia %d do ano %d cai no dia %d do mes %d.\n", diaDoAno, ano, dia, mes);

    return 0;
}

void decompoeData(int diaDoAno, int ano, int *mes, int *dia)
{
    // Quantidade de dias em cada mês
    int diasPorMes[12] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31};

    // Muda o valor de fevereiro caso o ano seja bissexto
    diasPorMes[1] = ehBissexto(ano) ? 29 : 28;

    // Itera por cada mês, utilizado para a contagem dos dias
    for (int i = 0; i < 12; i++)
    {
        // Se o número de dias restantes para a contagem
        // for maior ou igual o número de dias neste mês
        if (diaDoAno - diasPorMes[i] >= 0)
        {
            // Soma 1 ao número do mês atual (i + 1)
            *mes = i + 2;

            // O dia do mês é a quantidade de dias restantes menos o mês anterior (i)
            *dia = diaDoAno - diasPorMes[i];

            // Atualiza o número de dias restantes para contagem
            diaDoAno -= diasPorMes[i];
        }
    }
}

bool ehBissexto(int ano)
{
    return (ano - 2012) % 4 == 0 ? true : false;
}
