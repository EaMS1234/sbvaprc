#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentenca[256];

    printf("Sentenca: ");
    fgets(sentenca, 256, stdin);
    sentenca[strlen(sentenca) - 1] = '\0';

    for (int i = 1; i < strlen(sentenca); i += 2)
    {
        if (i != 1)
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

    return 0;
}
