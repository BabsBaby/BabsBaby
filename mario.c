#include <stdio.h>

//pirâmide de # em C
int main (void)
{
    int alt = 0;
    while(alt < 1 || alt > 8)
    {
        printf("n entre 1 e 8:");
        if (scanf("%d", &alt) != 1)
{
    // entrada inválida
}


    }
    for (int i = 1;i <= alt;i++)
    {
        for (int j = 0; j < i;j++)
        {
            printf("#");
        }
    printf("\n");
    }
}
