#include <cs50.h>
#include <stdio.h>


int main(void)
{
    //recebe valor do usuário
    int x = get_int("x: ");
    int y = get_int("y: ");


    if (x < y)//compara os valores
{
     printf("x é menor que y\n");
}
else if (x > y)
{
    printf("x é maior que y\n");
}
else if (x == y)
{
    printf("x é igual a y\n");
}
}
