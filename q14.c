#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    i = n;
    while (i > 0) {
        j = 0;
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
