#include "TPonto.h"
#include <stdio.h>

int main(){
    float x, y;
    int op;
    TPonto* ponto1;
    TPonto* ponto2;

    printf("Digite os valores de x e y para o ponto 1: ");
    scanf("%f %f", &x, &y);
    ponto1 = TPonto_create(x, y);

    printf("Digite os valores de x e y para o ponto 2: ");
    scanf("%f %f", &x, &y);
    ponto2 = TPonto_create(x, y);

    do{
        printf("- - - Menu - - -\n");
        printf("1 - imprimir ponto\n2 - Modificar os valores dos pontos\n3 - Calcular a distancia entre os pontos\n0 - Sair\nEscolha: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                TPonto_print(ponto1);
                TPonto_print(ponto2);
                break;
            case 2:
                printf("Qual ponto deseja modificar? (1 ou 2): ");
                int op2;
                scanf("%d", &op2);
                if(op2 == 1){
                    printf("Digite os novos valores de x e y para o ponto 1: ");
                    scanf("%f %f", &x, &y);
                    TPonto_modificar(ponto1, x, y);
                    printf("Ponto 1 modificado\n");
                }else if(op2 == 2){
                    printf("Digite os novos valores de x e y para o ponto 2: ");
                    scanf("%f %f", &x, &y);
                    TPonto_modificar(ponto2, x, y);
                    printf("Ponto 2 modificado\n");
                }
                break;
            case 3:
                TPonto_calcularDistancia(ponto1, ponto2);
                break;
            case 0:
                printf("Saindo...\n");  
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while(op != 0);

    return 0;
}
