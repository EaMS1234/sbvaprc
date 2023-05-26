#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main()
{
    int totalSeg = 0;
    int horas = 0;
    int minutos = 0;
    int seg = 0;

    printf("Total de segundos: ");
    scanf("%d", &totalSeg);

    decompoeTempo(totalSeg, &horas, &minutos, &seg);

    printf("%d segundo(s) corresponde(m) a:\n", totalSeg);
    printf("    %d hora(s)\n", horas);
    printf("    %d minuto(s)\n", minutos);
    printf("    %d segundo(s)\n", seg);

    return 0;
}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg)
{
    *horas = totalSeg / 3600;
    *minutos = (totalSeg - (*horas * 3600)) / 60;
    *seg = totalSeg - (*horas * 3600) - (*minutos * 60);
}
