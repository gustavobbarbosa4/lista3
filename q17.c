#include <stdio.h>

int main() {
    float valor, valor_total = 0, media;
    int contador = 0;
    char opcao;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);

        valor_total += valor;
        contador++;

        do {
            printf("MAIS MERCADORIAS (S/N)? ");
            scanf(" %c", &opcao);

            if (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n') {
                printf("Opcao invalida! Responda com 'S' para sim ou 'N' para nao.\n");
            }
        } while (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');

    } while (opcao == 'S' || opcao == 's');

    if (contador > 0) {
        media = valor_total / contador;

        printf("Valor total em estoque: R$ %.2f\n", valor_total);
        printf("Media de valor das mercadorias: R$ %.2f\n", media);
    } else {
        printf("Nenhuma mercadoria foi registrada.\n");
    }

    return 0;
}
