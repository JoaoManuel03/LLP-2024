#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

void verifica_aprovacao(Aluno *aluno) {
    aluno->Media = (aluno->N1 + aluno->N2) / 2.0;
    if (aluno->Faltas >= 20) {
        aluno->Reprovado_SN = 'S';
    } else {
        aluno->Reprovado_SN = ' ';
    }
}

void mostra_aprovacao(Aluno aluno) {
    printf("Aluno %d:\n", aluno.matricula);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("N1: %.2f\n", aluno.N1);
    printf("N2: %.2f\n", aluno.N2);
    printf("Média: %.2f\n", aluno.Media);
    printf("Faltas: %d\n", aluno.Faltas);

    if (aluno.Reprovado_SN == 'S') {
        printf("REPROVADO POR FALTA\n");
    } else if (aluno.Media < 6.0) {
        printf("REPROVADO POR MEDIA\n");
    } else {
        printf("APROVADO\n");
    }
    printf("\n");
}

int main() {
    Aluno alunos[5] = {
        {1, "João", 5.0, 8.0, 0.0, 20,' '},
        {2, "Maria", 6.0, 6.0, 0.0, 1,' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3,' '},
        {4, "Ana", 9.5, 10.0, 0.0, 10,' '},
        {5, "Luiz", 6.0, 4.0, 0.0, 4,' '}
    };

    for (int i = 0; i < 5; i++) {
        verifica_aprovacao(&alunos[i]);
    }

    for (int i = 0; i < 5; i++) {
        mostra_aprovacao(alunos[i]);
    }

    return 0;
}