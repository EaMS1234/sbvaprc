#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    int array[100][100];

    printf("Numero entre 1 e 100: ");
    scanf("%d", &numero);

    if (numero > 100 || numero < 1)
    {
        printf("Numero incorreto!\n");
    }
    else
    {
        for (int i = 0; i < numero; i++)
        {
            for (int j = 0; j < numero; j++)
            {
                // Verifica se a posição atual encontra-se nas bordas ...
                if (i == numero - 1 || j == numero - 1 || i == 0 || j == 0)
                {
                    // ... o que significa que seu valor deve ser 1, sempre.
                    array[i][j] = 1;
                }
                else
                {
                    /*
                    Adotando o array como um quadrado, isso preenche uma
                    diagonal.

                    Esse "if" impede o método de somar 1 ao número do canto
                    superior esquerdo de ocorrer caso ele seja apto a fornecer
                    um resultado errado.
                    */
                    if (j < numero - i)
                    {
                        /*
                        Soma 1 ao número no canto superior esquerdo da posição
                        atual: pois o número da posição atual, na primeira
                        diagonal, deve ser obrigatóriamente maior que o número
                        contido no seu canto superior esuqerdo.
                        */
                        array[i][j] = array[i - 1][j - 1] + 1;
                    }
                    else
                    {
                        /*
                        Preenche a outra diagonal.

                        Isso significa que o número nesta posição anterior deve
                        ser obrigatoriamente maior que o número no canto
                        superior direito da posição atual ...
                        */
                        if (array[i][j - 1] - 1 > array[i - 1][j] - 1)
                        {
                            /*
                            Subtrai-se 1 do número imediatamente à esquerda
                            da posição atual.
                            */
                            array[i][j] = array[i][j - 1] - 1;
                        }
                        else
                        {
                            /*
                            O número atual é igual ao número imediatamente
                            à sua esquerda.
                            */
                            array[i][j] = array[i][j - 1];
                        }
                    }
                }

                if (j < numero - 1)
                {
                    printf("%3d ", array[i][j]);
                }
                else
                {
                    printf("%3d", array[i][j]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
