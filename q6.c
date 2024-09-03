#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char opcao;

    do {

        do {
            printf("Digite a nota da 1a avaliacao: ");
            scanf("%f", &nota1);
            
            if (nota1 < 0 || nota1 > 10) {
                printf("VALOR INVALIDO. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a nota da 2a avaliacao: ");
            scanf("%f", &nota2);
            
            if (nota2 < 0 || nota2 > 10) {
                printf("VALOR INVALIDO. A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;

        printf("A media do aluno e: %.2f\n", media);

        do {
            printf("NOVO CALCULO (S/N)? ");
            scanf(" %c", &opcao);
            
            if (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n') {
                printf("Opcao invalida! Responda com 'S' para sim ou 'N' para nao.\n");
            }
        } while (opcao != 'S' && opcao != 's' && opcao != 'N' && opcao != 'n');

    } while (opcao == 'S' || opcao == 's');

    printf("Algoritmo encerrado.\n");

    return 0;
}
