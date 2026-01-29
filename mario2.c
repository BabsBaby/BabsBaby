#include <stdio.h>
#include <cs50.h>

//pirâmide de # do cs50 (bem mais simples)
int main(void)
{
    int altura = get_int("digite um número de 1 a 8: ");


    while (altura < 1 || altura > 8)
    {
        altura = get_int("digite um número de 1 a 8: ");
    }//eu esqueço do <= e do j = 1.
    //j=1 para começar na linha debaixo.
    //<= para ter exatamente 8 linhas a escada.
    for(int j = 1; j <= altura; j++)
    {
        for(int i = 0; i < j; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}
