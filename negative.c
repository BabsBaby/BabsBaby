#include <stdio.h>

int get_negative_int (void);
int main (void)
{
    //pega um npumero inteiro negativo do usuário
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int ("número inteiro negativo: ");
    } while (n < 0);//assegura que o número seja negativo
    return n;
}
