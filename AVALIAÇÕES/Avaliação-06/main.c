#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct {
    int codigo;
    char descricao[100];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;


void displayMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("----------------------------------------------------------------------\n");
    printf("opção:");
   }


void entradaDeProdutos(Produto produtos[], int *numProdutos) {
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produtos[*numProdutos].codigo);
    printf("Descrição: ");
    scanf("%49s", produtos[*numProdutos].descricao);
    produtos[*numProdutos].descricao[strlen(produtos[*numProdutos].descricao) + 1] = '\0';
    printf("Valor Unitário: ");
    scanf("%f", &produtos[*numProdutos].valorUnitario);
    printf("Quantidade do Estoque: ");
    scanf("%d", &produtos[*numProdutos].qtdEstoque);
    produtos[*numProdutos].valorEstoque = produtos[*numProdutos].valorUnitario *                produtos[*numProdutos].qtdEstoque; 
    printf("Valor Estoque: %.2f\n", produtos[*numProdutos].valorEstoque);
    int opcao;
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        (*numProdutos)++;
    }
}
void listarProdutos(Produto produtos[], int numProdutos){
    printf("----------------------------------------------------------------------\n");
    printf("Listagem de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    if (numProdutos == 0) {
        printf("Não há produtos cadastrados.\n");
        return;
    }

    for (int i = 0; i < numProdutos; i++) {
        printf("Código:\t%d\t|", produtos[i].codigo);
        printf("Descrição:\t%s\t|", produtos[i].descricao);
        printf("Valor Unitário:\t%.2f\t|", produtos[i].valorUnitario);
        printf("Quantidade em Estoque:\t%d\t\n", produtos[i].qtdEstoque);
    }
}
void valorTotalEstoque(Produto produtos[], int numProdutos){

    float valorTotal = 0;
    for (int i = 0; i < numProdutos; i++) {
        valorTotal += produtos[i].valorEstoque;
    }
    printf("Valor Total Estoque: %.2f\n", valorTotal); 
    
        
}
void fim(Produto produtos[], int numProdutos){    
        FILE *fptr = fopen("produtos.txt", "w");
        if (fptr == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
 
}
    for (int i = 0; i < numProdutos; i++) {
                fprintf(fptr, "%d;%s;%.2f;%d;%.2f\n", 
                        produtos[i].codigo,
                        produtos[i].descricao,
                        produtos[i].valorUnitario,
                        produtos[i].qtdEstoque,
                        produtos[i].valorEstoque);
            }
            fclose(fptr);
            
    }

int main() {
    Produto produtos[100]; 
    int numProdutos = 0; 
    int opcao;
    do {
        displayMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaDeProdutos(produtos, &numProdutos);
                break;
            case 2:
                listarProdutos(produtos, numProdutos);
                break;

            case 3:valorTotalEstoque(produtos, numProdutos);
                break;
            
            case 4:printf("registro salvo!\n");
                fim(produtos, numProdutos);
                
              break;
            
            
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 4);
    return 0;
}