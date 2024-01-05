#include <stdio.h>

#define MAX_ALUNOS 100

struct Aluno {
    long long codigo;
    float notas[4];
    float media;
};

void imprimirLista(struct Aluno alunos[], int n) {
    printf("Código\tNota1\tNota2\tNota3\tNota4\tMédia\n");
    for (int i = 0; i < n; i++) {
        printf("%lld\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               alunos[i].codigo,
               alunos[i].notas[0],
               alunos[i].notas[1],
               alunos[i].notas[2],
               alunos[i].notas[3],
               alunos[i].media);
    }
}

int main() {
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ALUNOS) {
        printf("Número inválido de alunos. O programa será encerrado.\n");
        return 1;
    }

    struct Aluno alunos[MAX_ALUNOS];

    // Limpar o buffer de entrada
    while (getchar() != '\n');

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Digite o código do aluno (9 dígitos): ");
        scanf("%lld", &alunos[i].codigo);

        // Limpar o buffer de entrada
        while (getchar() != '\n');

        printf("Digite as 4 notas do aluno:\n");
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        // Calcular a média
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] +
                           alunos[i].notas[2] + alunos[i].notas[3]) / 4.0;
    }

    // Imprimir a lista de alunos
    imprimirLista(alunos, n);

    return 0;
}