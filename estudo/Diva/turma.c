#include <stdio.h>
#include <stdlib.h>
#include "turma.h"

typedef struct _aluno{
  int id;
  float *notas;
}alunos; 

alunos* criar_turma(int quant_alunos, int quant_notas) {
    alunos *turma = malloc(quant_alunos * sizeof(alunos));
    for (int i = 0; i < quant_alunos; i++) {
        turma[i].notas = malloc(quant_notas * sizeof(float));
    }
    return turma;
}
void preencherTurma(alunos *turma, int quant_alunos, int quant_notas){
  int i, j;
  

  for(i=0 ; i<quant_alunos ; i++){
     printf("digite o id do aluno %d:", i );
        scanf("%d", &turma[i].id);
    for(j=0 ; j<quant_notas ; j++){
       printf("digite a nota %d:", j);
       scanf("%f", &turma[i].notas[j]);

    }
  }
}

void mostrarMedias(alunos *turma, int quant_alunos, int quant_notas){
    int i, j;
    float soma, media;
    for(i=0 ; i<quant_alunos ; i++){
        soma=0;
        for(j=0 ; j<quant_notas ; j++){
            soma += turma[i].notas[j];
        }
        media = soma/quant_notas;
    printf("id do aluno:%d\n", turma[i].id);
    printf("media do aluno:%2.f\n", media);
    }
}


void destruirturma(alunos *turma, int quant_alunos){
    for (int i = 0; i < quant_alunos; i++) {
        free(turma[i].notas);
    }
    free(turma);
    printf("Memoria da turma liberada com sucesso!\n");
}
