#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    while (num2 == 0) {
        printf("O segundo valor nao pode ser zero. Por favor, insira um valor diferente de zero: ");
        scanf("%f", &num2);
    }

    float resultado = num1 / num2;
    printf("O resultado da divisao eh: %.2f\n", resultado);

    return 0;
}
