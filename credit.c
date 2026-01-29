#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //exercício de crédito CS50
    long numero = get_long("Número: ");

    long temp = numero;
    int soma = 0;
    int posicao = 0;
    int digitos = 0;

    // Algoritmo de Luhn
    while (temp > 0)
    {
        int digito = temp % 10;

        if (posicao % 2 == 1)
        {
            digito *= 2;
            soma += digito / 10 + digito % 10;
        }
        else
        {
            soma += digito;
        }

        temp /= 10;
        posicao++;
        digitos++;
    }

    if (soma % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Identificação da bandeira
    long inicio = numero;
    while (inicio >= 100)
    {
        inicio /= 10;
    }

    if ((inicio == 34 || inicio == 37) && digitos == 15)
    {
        printf("AMEX\n");
    }
    else if (inicio >= 51 && inicio <= 55 && digitos == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((inicio / 10 == 4) && (digitos == 13 || digitos == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
//4003600000000014 visa
