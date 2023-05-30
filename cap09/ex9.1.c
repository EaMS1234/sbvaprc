#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int contagem = 0;

    char string[256];

    printf("String: ");
    fgets(string, 256, stdin);
    string[strlen(string) - 1] = '\0';

    while (1)
    {
        printf("%c", string[contagem]);

        if (string[contagem + 1] == ' ' || string[contagem + 1] == '\0')
        {
            printf(".\n");
            break;
        }
        else
        {
            printf(", ");
            contagem++;
        }
    }

    return 0;
}
