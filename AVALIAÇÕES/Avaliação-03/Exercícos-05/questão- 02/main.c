#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute;

   
    srand(time(NULL));

    
    numeroSecreto = rand() % 100 + 1;

    do {
        
        printf("Adivinhe o número (entre 1 e 100) ou digite -1 para sair: ");
        scanf("%d", &chute);

       
        if (chute == -1) {
            printf("Você escolheu sair. O número secreto era %d.\n", numeroSecreto);
            break;
        }

        
        if (chute == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto.\n");
        } else if (chute < numeroSecreto) {
            printf("Erro! O número secreto é maior que %d. Tente novamente.\n", chute);
        } else {
            printf("Erro! O número secreto é menor que %d. Tente novamente.\n", chute);
        }
    } while (chute != numeroSecreto && chute != -1);

    return 0;
}