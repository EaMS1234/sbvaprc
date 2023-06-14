#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
} Hora;

Hora gerarHora(int quantidadeSegundos);
void imprimirHora(const Hora *hora);

int main()
{
    int quantidadeSegundos;

    Hora hora;

    printf("Segundos: ");
    scanf("%d", &quantidadeSegundos);

    hora = gerarHora(quantidadeSegundos);

    printf("Hora correspondente: ");
    imprimirHora(&hora);
    printf("\n");

    return 0;
}

Hora gerarHora(int quantidadeSegundos)
{
    Hora hora;

    hora.hora = quantidadeSegundos / 3600;
    hora.minuto = (quantidadeSegundos - hora.hora * 3600) / 60;
    hora.segundo = (quantidadeSegundos - hora.hora * 3600) - (hora.minuto * 60);

    return hora;
}

void imprimirHora(const Hora *hora)
{
    printf("%02d:%02d:%02d", hora->hora, hora->minuto, hora->segundo);
}
