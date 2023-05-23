#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float *media);

int main()
{
    float somatorio = 0;
    float media = 0;

    float n[10];

    for (int i = 0; i < 10; i++)
    {
        printf("n[%d]: ", i);
        scanf("%f", &n[i]);
    }

    somatorioMedia(n, 10, &somatorio, &media);

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);

    return 0;
}

void somatorioMedia(float a[], int n, float *somatorio, float *media)
{
    for (int i = 0; i < n; i++)
    {
        *somatorio += a[i];
        *media += a[i];
    }

    *media = *media / n;
}
