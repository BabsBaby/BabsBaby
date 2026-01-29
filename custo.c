#include <stdio.h>

//calcula preço de um produto
int main() {
    float custo;
    float margem = 0.60; // 60%

    printf("Digite o custo de producao: ");
    scanf("%f", &custo);

    float preco_minimo = custo / (1 - margem);

    printf("Preco minimo para margem de 60%%: R$ %.2f\n", preco_minimo);

    return 0;
}
