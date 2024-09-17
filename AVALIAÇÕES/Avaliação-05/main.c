#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 100

int main() {
    // Criar e gravar no arquivo
    FILE *arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char linha[MAX_LINHA];

    printf("Digite linhas de texto (digite 'fim' para parar):\n");
    while (1) {
        printf("> ");
        fgets(linha, MAX_LINHA, stdin);
        linha[strcspn(linha, "\n")] = 0; // Remover o caractere de nova linha

        if (strcmp(linha, "fim") == 0) {
            break;
        }

        fprintf(arquivo, "%s\n", linha);
    }

    fclose(arquivo);

    // Ler e mostrar o conteúdo do arquivo
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}