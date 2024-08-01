#include <stdio.h>

// Função para exibir os bits de um número
void exibirBits(int num) {
    for (int i = 31; i >= 0; i--) {
        (num & (1 << i)) ? printf("1") : printf("0");
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int num1, num2, opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Bits do primeiro número: ");
    exibirBits(num1);

    printf("Bits do segundo número: ");
    exibirBits(num2);

    printf("Escolha uma operação:\n");
    printf("1. AND bit a bit (&&)\n");
    printf("2. OR bit a bit (||)\n");
    printf("3. NOT bit a bit (!)\n");
    printf("4. Negação bit a bit (~)\n");
    printf("5. Deslocamento para a esquerda (<<)\n");
    printf("6. Deslocamento para a direita (>>)\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Resultado da operação AND bit a bit: ");
            exibirBits(num1 & num2);
            break;
        case 2:
            printf("Resultado da operação OR bit a bit: ");
            exibirBits(num1 | num2);
            break;
        case 3:
            printf("Resultado da operação NOT bit a bit: ");
            exibirBits(num1 ^ num2);
            break;
        case 4:
            printf("Resultado da operação Negação bit a bit: ");
            exibirBits(~num1);
            break;
        case 5:
            printf("Digite o número de bits para deslocar: ");
            int deslocamento;
            scanf("%d", &deslocamento);
            printf("Resultado do deslocamento para a esquerda: ");
            exibirBits(num1 << deslocamento);
            break;
        case 6:
            printf("Digite o número de bits para deslocar: ");
            scanf("%d", &deslocamento);
            printf("Resultado do deslocamento para a direita: ");
            exibirBits(num1 >> deslocamento);
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}