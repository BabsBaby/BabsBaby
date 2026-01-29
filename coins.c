#include <cs50.h>
#include <math.h> // para usar o round
#include <stdio.h>


int main(void)
//calcula quantas moedas de troco (exercício cs50)

{
    float valor;
    do
    {
        valor = get_float("Digite um valor de troco, com ponto: ");
    }
    while (valor < 0); // tinha errado o sinal
    int centavos = round(valor * 100); // arredonda o valor round(19.999998) → 20
    int moedas = 0;


    moedas += centavos / 50;
    centavos %= 50;
    // ou esse
    moedas = moedas + (centavos / 25);
    centavos %= 25; // calcula o que falta de moedas, mas não cabe em 25


    moedas = moedas + (centavos / 10);
    centavos %= 10;


    moedas = moedas + (centavos / 5);
    centavos %= 5;


    moedas += centavos; // para moedas de 1 centavo


    printf("%i\n", moedas);
}
