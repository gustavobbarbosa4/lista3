#include <stdio.h>

int main() {
    int i;
    int numero = 8;

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
