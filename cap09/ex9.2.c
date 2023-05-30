#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sentenca[256];

    printf("Sentenca: ");
    fgets(sentenca, 256, stdin);
    sentenca[strlen(sentenca) - 1] = '\0';

    printf("Primeiro caractere: %c\n", sentenca[0]);
    printf("Ultimo caractere: %c\n", sentenca[strlen(sentenca) - 1]);
    printf("Numero de caracteres: %d\n", strlen(sentenca));

    return 0;
}
