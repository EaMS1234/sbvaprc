#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;

    int idxMaior;
    int idxMeio;
    int idxMenor;

    char entrada[40];
    char string[3][40];

    for (int i = 0; i < 3; i++)
    {
        printf("String %d: ", i + 1);

        fgets(entrada, 40, stdin);
        entrada[strlen(entrada) - 1] = '\0';

        n = 0;
        while (1)
        {
            string[i][n] = entrada[n];

            if (entrada[n] == '\0')
            {
                break;
            }
            else
            {
                n++;
            }
        }
    }

    if (strcmp(string[0], string[1]) <= 0 && strcmp(string[0], string[2]) <= 0)
    {
        idxMaior = 0;

        idxMeio = strcmp(string[1], string[2]) <= 0 ? 1 : 2;
        idxMenor = strcmp(string[2], string[1]) <= 0 ? 1 : 2;
    }
    else if (strcmp(string[1], string[0]) <= 0 && strcmp(string[1], string[2]) <= 0)
    {
        idxMaior = 1;

        idxMeio = strcmp(string[0], string[2]) <= 0 ? 0 : 2;
        idxMenor = strcmp(string[2], string[0]) <= 0 ? 0 : 2;
    }
    else if (strcmp(string[2], string[0]) <= 0 && strcmp(string[2], string[1]) <= 0)
    {
        idxMaior = 2;

        idxMeio = strcmp(string[0], string[1]) <= 0 ? 0 : 1;
        idxMenor = strcmp(string[1], string[0]) <= 0 ? 0 : 1;
    }

    printf("%s, %s e %s\n", string[idxMaior], string[idxMeio], string[idxMenor]);

    return 0;
}
