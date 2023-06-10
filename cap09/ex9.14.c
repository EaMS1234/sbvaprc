#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tornarMinuscula(char *str);

int main()
{
    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

    tornarMinuscula(frase);

    printf("%s\n", frase);
 
    return 0;
}

void tornarMinuscula(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = (str[i] - 32);
        }
    }
}
