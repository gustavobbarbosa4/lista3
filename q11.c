#include <stdio.h>

int main() {
    int N, i;

    do {
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &N);

        if (N <= 0) {
            printf("VALOR INVALIDO. O valor deve ser maior que zero.\n");
        }
    } while (N <= 0);

    i = 1;

    while (i <= N) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
