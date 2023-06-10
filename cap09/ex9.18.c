#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool int
#define true 1
#define false 0

bool ehPalindromo(const char *str);

int main()
{
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string) - 1] = '\0';

    if (ehPalindromo(string))
    {
        printf("%c%s%c eh um palindromo!\n", 34, string, 34);
    }
    else
    {
        printf("%c%s%c nao eh um palindromo!\n", 34, string, 34);
    }

    return 0;
}

bool ehPalindromo(const char *str)
{
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            return false;
        }
    }

    return true;
}
