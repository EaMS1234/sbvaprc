#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 45; i <= 60; i++)
    {
        if (i % 4 != 0)
        {
            printf("%d: indivisivel\n", i);
        }
        else
        {
            printf("%d: divisivel\n", i);
        }
    }

    return 0;
}
