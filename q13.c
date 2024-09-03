#include <stdio.h>

int main() {
    int valor, i;

    do {
        printf("Digite um valor inteiro entre 1 e 10: ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 10) {
            printf("VALOR INVALIDO. O valor deve estar entre 1 e 10.\n");
        }
    } while (valor < 1 || valor > 10);

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", valor, i, valor * i);
        i++;
    }

    return 0;
}
