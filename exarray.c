#include <stdio.h>
#include <cs50.h>

//esercício de array
const int TOTAL = 3;
float avarage(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length;  i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) length;
}
int main (void)
{
    int nota[TOTAL];
    for (int i= 0;i < TOTAL; i++)
    {
         nota[i] = get_int("Nota: ");
    }

    printf("Média: %f\n", avarage(TOTAL, nota));
}
