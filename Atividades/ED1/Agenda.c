#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[128];
    char contato[16]; 
} agenda;

void menu() {
    printf("\n1 - Novo contato\n2 - Exibir contatos\n3 - Salvar contatos\n0 - Sair\nEscolha: ");
}

void novocontato(agenda **c, int *Qcontato) {
    if(*Qcontato >= 100) {
        printf("Agenda cheia!\n");
        return;
    }
    if(*Qcontato == 0){
        printf("Digite o nome do contato (somente 1 nome): ");
        scanf("%s", (*c)[*Qcontato].nome);
        printf("Digite o numero do contato (somente numeros): ");
        scanf("%s", (*c)[*Qcontato].contato);
        (*Qcontato)++;
    }else{
        *c = realloc(*c, (*Qcontato + 1) * sizeof(agenda));
        printf("Digite o nome do contato (somente 1 nome): ");
        scanf("%s", (*c)[*Qcontato].nome);
        printf("Digite o numero do contato (somente numeros): ");
        scanf("%s", (*c)[*Qcontato].contato);
        (*Qcontato)++;
    }   
}

void exibircontatos(agenda *c, int Qcontato) {
    int Econtato;
    if (Qcontato == 0) {
        printf("Agenda vazia.\n");
        return;
    }
    printf("Qual contato deseja exibir? (1 a %d): ", Qcontato);
    scanf("%d", &Econtato);

    if (Econtato >= 1 && Econtato <= Qcontato) {
        printf("Nome: %s\n", c[Econtato - 1].nome);
        char *num = c[Econtato - 1].contato;
        printf("Contato: (%.2s) %.1s %.4s-%.4s\n", num, num+2, num+3, num+7);
    } else {
        printf("Contato não encontrado.\n");
    }
}

void salvarcontatos(agenda *c, int Qcontato) {
    FILE *arquivo;
    int i;

    arquivo = fopen("contatos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (i = 0; i < Qcontato; i++) {
        fprintf(arquivo, "%s %s\n", c[i].nome, c[i].contato);
    }

    fclose(arquivo);
    printf("Contatos salvos com sucesso!\n");
}

int main() {
    agenda *c;
    c = (agenda *) malloc(sizeof(agenda));
    if (c == NULL) {
        printf("Erro de memoria!\n");
        return 1;
    }
    int Qcontato = 0;
    int op = 0;

    do {
        menu();
        scanf("%d", &op);

        switch (op) {
            case 1:
                novocontato(&c, &Qcontato);
                break;
            case 2:
                exibircontatos(c, Qcontato);
                break;
            case 3:
                salvarcontatos(c, Qcontato);
                break;
            case 0:
                printf("Fechando...\n");
                break;
            default:
                printf("Opção invalida\n");
        }
    } while (op != 0);

    free(c);
    return 0;
}