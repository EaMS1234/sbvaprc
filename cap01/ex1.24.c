#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aulas;
    float valor;
    float desconto;
    float salario;

    printf("Valor da hora/aula: ");
    scanf(" %f", &valor);

    printf("Quantidade de aulas: ");
    scanf(" %d", &aulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf(" %f", &desconto);

    salario = aulas * valor;                       // Salário bruto
    salario -= aulas * ((desconto / 100) * valor); // Desconto

    printf("Salario Liquido: %.2f\n", salario);

    return 0;
}
