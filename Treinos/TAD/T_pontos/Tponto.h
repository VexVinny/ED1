



#ifndef TPONTO_H
#define TPONTO_H
typedef struct _ponto TPonto;
/**
 * Cria instâncias de TPonto;
 * @param float x da coordenada x
 * @param float y da coordenada y
 * @return TPonto* instância para um TPonto
 */
TPonto* TPonto_create(float, float);
/**
 * Imprime um TPonto preenchido.s
 */
void TPonto_print(TPonto*);

/**
 * Deleta uma instância de TPonto.
 * @param TPonto* ponto a ser deletado
 */
void TPonto_deletar(TPonto*);

TPonto* TPonto_modificar(TPonto* ponto, float x, float y);

void TPonto_calcularDistancia(TPonto* ponto1, TPonto* ponto2);
        
#endif