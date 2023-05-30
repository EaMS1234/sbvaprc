#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentenca[256];

    printf("Sentenca: ");
    fgets(sentenca, 256, stdin);
    sentenca[strlen(sentenca) - 1] = '\0';

    for (int i = 0; i < strlen(sentenca); i += 2)
    {
        if (i != 0)
        {
            printf(", ");
        }

        if (sentenca[i] == ' ')
        {
            printf("'%c'", sentenca[i]);
        }
        else
        {
            printf("%c", sentenca[i]);
        }
    }

    printf("\n");

    return 0;
}
