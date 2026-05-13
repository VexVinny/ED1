#include "Frac.h"
#include<stdio.h>
#include<stdlib.h>

int main() {

    float num, den;
    int op, op2;

    Frac* frac1 = NULL;
    Frac* frac2 = NULL;

    printf("Defina o primeiro racional: ");
    scanf("%f %f",&num,&den);
    frac1 = Frac_create(num,den);

    printf("Defina o segundo racional: ");
    scanf("%f %f",&num,&den);
    frac2 = Frac_create(num,den);

    do{
        printf("\n--- MENU ---\n");
        printf("1 - Trocar racional\n");
        printf("2 - Somar\n");
        printf("3 - Multiplicar\n");
        printf("4 - Testar equivalencia\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d",&op);

        switch(op){
            case 1:
                printf("Qual racional deseja mudar? ");
                scanf("%d", &op2);
                switch (op2){
                    case 1:
                        printf("Digite os valores do novo racional (numerador e denominador): ");
                        scanf("%f %f", &num, &den);
                        free(frac1);
                        frac1 = Frac_create(num,den);
                        break;
                    case 2:
                        printf("Digite os valores do novo racional (numerador e denominador) ");
                        scanf("%f %f", &num, &den);
                        free(frac2);
                        frac2 = Frac_create(num,den);
                        break;
                    default:
                        printf("Valor invalido!!");
                    break;
                }
            break;
            case 2:
                Frac_soma(frac1,frac2);
            break;
            case 3:
                Frac_mult(frac1,frac2);
            break;
            case 4:
                if(Frac_equiv(frac1,frac2))
                    printf("Equivalentes\n");
                else
                    printf("Nao equivalentes\n");
            break;
        }
    }while(op!=0);

}