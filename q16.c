#include <stdio.h>

int main() {
    int num_mercadorias, i;
    float valor, valor_total = 0, media;

    printf("Digite o numero total de mercadorias no estoque: ");
    scanf("%d", &num_mercadorias);

    for (i = 1; i <= num_mercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        valor_total += valor;  
    }

    media = valor_total / num_mercadorias;

    printf("Valor total em estoque: R$ %.2f\n", valor_total);
    printf("Media de valor das mercadorias: R$ %.2f\n", media);

    return 0;
}
