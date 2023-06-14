#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float numerador;
    float denominador;
} Fracao;

Fracao somar(const Fracao *f1, const Fracao *f2);
Fracao subtrair(const Fracao *f1, const Fracao *f2);
Fracao multiplicar(const Fracao *f1, const Fracao *f2);
Fracao dividir(const Fracao *f1, const Fracao *f2);
void imprimirFracao(const Fracao *f);

int main()
{
    Fracao f1;
    Fracao f2;

    Fracao soma;
    Fracao diferenca;
    Fracao produto;
    Fracao divisao;

    printf("Fracao 1\n");
    printf("    Numerador: ");
    scanf("%f", &f1.numerador);
    printf("    Demoninador: ");
    scanf("%f", &f1.denominador);

    printf("Fracao 2\n");
    printf("    Numerador: ");
    scanf("%f", &f2.numerador);
    printf("    Demoninador: ");
    scanf("%f", &f2.denominador);

    // Realiza as operações
    soma = somar(&f1, &f2);
    diferenca = subtrair(&f1, &f2);
    produto = multiplicar(&f1, &f2);
    divisao = dividir(&f1, &f2);

    // Mostra os resultados das operações ...
    // ... Soma
    imprimirFracao(&f1);
    printf(" + ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&soma);
    printf("\n");

    // ... Subtracao
    imprimirFracao(&f1);
    printf(" - ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&diferenca);
    printf("\n");

    // ... Multiplicacao
    imprimirFracao(&f1);
    printf(" * ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&produto);
    printf("\n");

    // ... Divisao
    imprimirFracao(&f1);
    printf(" / ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&divisao);
    printf("\n");

    return 0;
}

Fracao somar(const Fracao *f1, const Fracao *f2)
{
    Fracao soma = {
        (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador),
        f1->denominador * f2->denominador};

    return soma;
}

Fracao subtrair(const Fracao *f1, const Fracao *f2)
{
    Fracao diferenca = {
        (f1->numerador * f2->denominador) - (f2->numerador * f1->denominador),
        f1->denominador * f2->denominador};

    return diferenca;
}

Fracao multiplicar(const Fracao *f1, const Fracao *f2)
{
    Fracao produto = {
        f1->numerador * f2->numerador, f1->denominador * f2->denominador};

    return produto;
}

Fracao dividir(const Fracao *f1, const Fracao *f2)
{
    Fracao divisao = {
        f1->numerador * f2->denominador, f1->denominador * f2->numerador};

    return divisao;
}

void imprimirFracao(const Fracao *f)
{
    printf("%.2f/%.2f", f->numerador, f->denominador);
}
