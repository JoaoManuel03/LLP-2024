#include <stdio.h>
#include <string.h>

// Define the structure for a product
typedef struct {
    int code;
    char description[50];
    float unitPrice;
    int quantity;
} Product;

// Function prototypes
void displayMenu();
void addProduct(Product products[], int *size);
void updateProduct(Product products[], int size);
void listProducts(Product products[], int size);
void deleteProduct(Product products[], int *size);

int main() {
    Product products[100]; // Array to store products
    int size = 0; // Initialize size to 0

    while (1) {
        displayMenu();
        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                addProduct(products, &size);
                break;
            case 2:
                updateProduct(products, size);
                break;
            case 3:
                listProducts(products, size);
                break;
            case 4:
                deleteProduct(products, &size);
                break;
            default:
                printf("Opcão invalida. Por favor digite de novo.\n");
        }
    }

    return 0;
}

void displayMenu() {
    printf("Menu:\n");
    printf("1. Cadastrar Produto\n");
    printf("2. Consultar Produto para Alteração\n");
    printf("3. Listar todos os produtos\n");
    printf("4. Exclusão do Produto\n");
    printf("Digite sua opcão: ");
}

void addProduct(Product products[], int *size) {
    printf("Digite o codigo do produto: ");
    scanf("%d", &products[*size].code);
    printf("Digite a descricão do produto: ");
    scanf("%s", products[*size].description);
    printf("Digite o valor unitario: ");
    scanf("%f", &products[*size].unitPrice);
    printf("Digite a quantidade: ");
    scanf("%d", &products[*size].quantity);
    (*size)++;
}

void updateProduct(Product products[], int size) {
    int code;
    printf("Digite o codigo do produto que deseja alterar: ");
    scanf("%d", &code);

    for (int i = 0; i < size; i++) {
        if (products[i].code == code) {
            printf("Digite nova descricão: ");
            scanf("%s", products[i].description);
            printf("Digite novo valor unitario: ");
            scanf("%f", &products[i].unitPrice);
            printf("Digite nova quantidade: ");
            scanf("%d", &products[i].quantity);
            return;
        }
    }

    printf("Produto não encontrado.\n");
}

void listProducts(Product products[], int size) {
    for (int i = 0; i < size; i++) {
        float stockValue = products[i].quantity * products[i].unitPrice;
        printf("Produto %d: %s - Valor Unitario: %.2f - Quantidade: %d - Valor do estoque: %.2f\n",
               products[i].code, products[i].description, products[i].unitPrice, products[i].quantity, stockValue);
    }
}

void deleteProduct(Product products[], int *size) {
    int code;
    printf("Digite o codigo do produto: ");
    scanf("%d", &code);

    for (int i = 0; i < *size; i++) {
        if (products[i].code == code) {
            char confirm;
            printf("Tem certeza que deseja deletar o produto? (S/n): ");
            scanf(" %c", &confirm);

            if (confirm == 'S') {
                for (int j = i; j < *size - 1; j++) {
                    products[j] = products[j + 1];
                }
                (*size)--;
                printf("Produto deletado com sucesso.\n");
            } else {
                printf("exclusão cancelada.\n");
            }
            return;
        }
    }

    printf("Protudo não encontrado.\n");
}