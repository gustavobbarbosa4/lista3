#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    do {
        printf("Digite o segundo valor: ");
        scanf("%f", &num2);
        
        if (num2 == 0) {
            printf("VALOR INVALIDO. O segundo valor nao pode ser zero. Tente novamente.\n");
        }
    } while (num2 == 0);

    float resultado = num1 / num2;
    printf("O resultado da divisao e: %.2f\n", resultado);

    return 0;
}
