#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Divisão: %.2f\n", (float)num1 / num2);
    } else {
        printf("Não é possível realizar a divisão por zero.\n");
    }

    return 0;
}