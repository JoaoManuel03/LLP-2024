#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}