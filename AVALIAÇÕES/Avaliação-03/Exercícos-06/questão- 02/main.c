#include <stdio.h>

int main() {
    int matriz[3][3]; 
    int soma = 0; 


    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}