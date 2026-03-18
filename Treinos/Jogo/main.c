#include<stdio.h>
/*Enunciado:
 * Na função main, crie duas variáveis: int nivel = 1; e int pontos_vida = 100;.
 * Crie uma função chamada receberDano que subtrai um valor dos pontos de vida. Ela deve receber os pontos de vida por referência (usando ponteiro) e o dano por valor.
 * Crie uma função chamada subirDeNivel que aumenta o nível em 1 e restaura os pontos de vida para 100. Ela deve receber ambos por referência.
 * Na main, chame essas funções passando os endereços corretos (&) e imprima os valores antes e depois para provar que as variáveis originais foram alteradas.
*/


void receberdano(int *pontos_vida, int dano){
    *pontos_vida = *pontos_vida - dano;
}

void subirDeNivel(int *pontos_vida, int *nivel){
    *nivel = *nivel + 1;
    *pontos_vida = 100;
}

int main(){
    int nivel = 1, pontos_vida = 100, dano, qDano = 0;

    printf("Nivel: %d\nHP: %d\n\n", nivel, pontos_vida);

    printf("quanto de dano quer dar ao playes? ");
    scanf("%d", &dano);
    qDano = qDano + dano;
    receberdano(&pontos_vida, dano);
    printf("Nivel: %d\nHP: %d\n\n", nivel, pontos_vida);

    printf("Subiu de nivel!!\n");
    subirDeNivel(&pontos_vida, &nivel);

    printf("Nivel: %d\nHP: %d\n\n", nivel, pontos_vida);

}


