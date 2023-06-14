#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

int diaDoAno(const Data *data);

int main()
{
    Data data;

    printf("dia: ");
    scanf("%d", &data.dia);
    printf("mes: ");
    scanf("%d", &data.mes);
    printf("ano: ");
    scanf("%d", &data.ano);

    printf("O dia do ano da data %02d/%02d/%04d eh %d.\n",
           data.dia, data.mes, data.ano, diaDoAno(&data));

    return 0;
}

int diaDoAno(const Data *data)
{
    int total = 0;

    int diasPorMes[12] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31};

    // Altera a quantidade de dias
    // para anos bissextos
    if (data->ano % 4 == 0)
    {
        diasPorMes[1]++;
    }

    for (int i = 0; i < data->mes; i++)
    {
        // Soma os dias ...
        if (i == (data->mes - 1))
        {
            // ... até o atual
            total += data->dia;
        }
        else
        {
            // ... do mês inteiro
            total += diasPorMes[i];
        }
    }

    return total;
}
