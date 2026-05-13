#ifndef TURMA_H
#define TURMA_H

typedef struct _aluno alunos;

alunos* criar_turma(int quant_alunos, int quant_notas);

void preencherTurma(alunos *turma, int quant_alunos, int quant_notas);

void mostrarMedias(alunos *turma, int quant_alunos, int quant_notas);

void destruirturma(alunos *turma, int quant_alunos);


#endif