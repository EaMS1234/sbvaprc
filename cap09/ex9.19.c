#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring(char *recorte, const char *origem, int inicio, int fim);

int main()
{
    int inicio;
    int fim;

    char string[40];
    char recorte[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string) - 1] = '\0';

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    substring(recorte, string, inicio, fim);

    printf("Recorte: %s\n", recorte);

    return 0;
}

void substring(char *recorte, const char *origem, int inicio, int fim)
{
    if (fim >= inicio && fim < strlen(origem))
    {
        for (int i = 0; i < (fim - inicio); i++)
        {
            recorte[i] = origem[inicio + i];
        }

        recorte[fim - inicio] = '\0';
    }
    else
    {
        for (int i = 0; i < strlen(origem); i++)
        {
            recorte[i] = origem[i];
        }
    }

    recorte[strlen(origem)] = '\0';
}
