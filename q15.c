#include <stdio.h>

int main() {
    int i, soma = 0, contador = 0;
    float media;

    i = 15;
    while (i <= 100) {
        soma += i;
        contador++;
        i++;
    }

    media = (float)soma / contador;

    printf("A media aritmetica dos numeros entre 15 e 100 e: %.2f\n", media);

    return 0;
}
