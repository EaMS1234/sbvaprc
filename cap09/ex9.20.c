#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

bool contem(const char *fonte, const char *aPesquisar);

int main()
{
    char fonte[40];
    char busca[40];

    printf("String fonte: ");
    fgets(fonte, 40, stdin);
    fonte[strlen(fonte) - 1] = '\0';

    printf("String a pesquisar: ");
    fgets(busca, 40, stdin);
    busca[strlen(busca) - 1] = '\0';

    if (contem(fonte, busca))
    {
        printf("%c%s%c esta contida em %c%s%c\n",
               34, busca, 34, 34, fonte, 34);
    }
    else
    {
        printf("%c%s%c nao esta contida em %c%s%c\n",
               34, busca, 34, 34, fonte, 34);
    }

    return 0;
}

bool contem(const char *fonte, const char *aPesquisar)
{
    for (int i = 0; i < strlen(fonte); i++)
    {
        if (fonte[i] == aPesquisar[0])
        {
            for (int j = 0; j < strlen(aPesquisar); j++)
            {
                if (fonte[i + j] != aPesquisar[j])
                {
                    return false;
                }
            }
        }
    }

    return true;
}
