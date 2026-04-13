#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[32];
    float cr;
}Aluno;

int main(){
    Aluno aluno[3];

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("Digite o numero(inteiro) da matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Digite o numero(float) do cr: ");
        scanf("%f", &aluno[i].cr);
    }

    printf("\n Tabela dos alunos \n\n");

    for(int i = 0; i < 3; i++){
        printf("Matricula: %d | Nome: %s | Cr: %.2f\n\n", aluno[i].matricula, aluno[i].nome, aluno[i].cr);
    }

}