#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float delta;
    float s[2];

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("Nao existe equacao do segundo grau!\n");
    }
    else
    {
        delta = powf(b, 2) - (4 * a * c);

        s[0] = ((b * -1) - sqrtf(delta)) / (2 * a);
        s[1] = ((b * -1) + sqrtf(delta)) / (2 * a);

        printf("Delta: %.2f\n", delta);
        printf("S = {");

        if (delta > 0)
        {
            printf("%.2f, %.2f", s[0], s[1]);
        }
        else if (delta == 0)
        {
            printf("%.2f", s[0]);
        }

        printf("}\n");
    }

    return 0;
}
