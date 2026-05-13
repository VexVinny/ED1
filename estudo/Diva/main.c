#include <stdio.h>
#include "turma.h"

int main() {
    alunos *turma;
    int quant_alunos, quant_notas;

    printf("Digite quantos alunos: ");
    scanf("%d", &quant_alunos);
    printf("Digite quantas notas: ");
    scanf("%d", &quant_notas);

    turma = criar_turma(quant_alunos, quant_notas);

    preencherTurma(turma, quant_alunos, quant_notas);

    mostrarMedias(turma, quant_alunos, quant_notas);
    

    destruirturma(turma, quant_alunos);

    return 0;
}