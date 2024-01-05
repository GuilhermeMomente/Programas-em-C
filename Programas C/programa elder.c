#include <stdio.h>
#define MAX_ALUNOS 100

struct Aluno{
    long long codigo;
    float notas[4];
    float media;
};

void imprimirLista(struct Aluno alunos[], int n){
    printf("Codigo\tNota1\tNota2\tNota3\tNota4\tMedia\n");
    for (int i = 0; i < n; i++ ){
        printf("%lld\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", alunos[i].codigo, alunos[i].notas[0], alunos.notas[1], alunos[i].notas[2], alunos[i].notas[3], alunos.media);
    }
}
int main(){
    int n;

    printf("Digite o numero de alunos:");
    scanf("%d", &n);

    if(n <= 0 || n > MAX_ALUNOS){
        printf("Numero invalido de alunos. 0 o programa ser encerrado");
        retun 1;
    }
}

struct Aluno alunos[MAX_ALUNOS];

for (int i = 0; i < n; i++){
    printf("\nAluno %d\n", i + 1);

    printf("Digite o codigo de aluno(9 digitos):");
    scanf("%lld", &alunos[i].codigo);

    printf("Digite as 4 notas do aluno\n");
    for (int j = 0; j < 4; j++){
        printf("Nota %d:", j + 1);
        scanf("%f", &alunos[i].notas[j]);
    }
    //Calcular a media
    alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3]) / 4.0;

    imprimirLista(alunos, n);
}