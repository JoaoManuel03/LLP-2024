#include <stdio.h>

void fervaAgua() {
    printf("1. Ferva água.\n");
    printf("   Ligue o fogao ou a maquina de café.\n");
    printf("   Coloque agua no recipiente.\n");
    printf("   Espere ate que a água ferva.\n");
}

void adicionaPoDeCafe() {
    printf("2. Adicione pó de café à cafeteira.\n");
    printf("   Abra o pacote de café.\n");
    printf("   Mede a quantidade certa de pó de café.\n");
    printf("   Adicione o pó de café à cafeteira ou filtro.\n");
}

void despejaAguaQuente() {
    printf("3. Despeje a água quente sobre o pó.\n");
    printf("   Certifique-se de que a água esteja na temperatura certa.\n");
}

void espere() {
    printf("4. Espere alguns minutos.\n");
    printf("   O tempo de espera pode variar dependendo do tipo de café.\n");
}

void coeEServe() {
    printf("5. Coe o café e sirva.\n");
    printf("   Coe o café para separar o liquido do po.\n");
    printf("   Sirva o café em uma xicara.\n");
    printf("   Adicione açucar, creme ou outros condimentos, se desejar.\n");
}

int main() {
    fervaAgua();
    adicionaPoDeCafe();
    despejaAguaQuente();
    espere();
    coeEServe();
    return 0;
}