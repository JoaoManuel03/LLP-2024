#include <stdio.h>

int main() {
    int numeros[5]; 
    int soma = 0; 

    
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("Números lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

   
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    
    printf("A soma dos 5 números inteiros é: %d\n", soma);

    return 0;
}