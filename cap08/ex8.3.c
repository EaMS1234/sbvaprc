#include <stdio.h>
#include <stdlib.h>

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg);

int main()
{
    int totalSeg;
    int horas;
    int minutos;
    int seg;

    printf("Total de segundos: ");
    scanf("%d", &totalSeg);

    printf("%d segundo(s) corresponde(m) a:");
    printf("    %d hora(s)\n", horas);
    printf("    %d minuto(s)\n", minutos);
    printf("    %d segundo(s)\n", seg);

    return 0;
}

void decompoeTempo(int totalSeg, int *horas, int *minutos, int *seg)
{
    *horas = 
}
