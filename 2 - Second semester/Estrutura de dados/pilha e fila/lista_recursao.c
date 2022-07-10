#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int id;
    struct no *prox;
} No;

No* inicio = NULL;
int tam = 0;

void adicionar (int posicao, int id)
{
    
    if (posicao >= 0 && posicao <= tam) {
        
        No* novo = (No*) malloc (sizeof(No));
        novo -> id = id;
        novo -> prox = NULL;
        
        if (inicio == NULL) {
            inicio = novo;
        }
        else if (posicao == 0) {
            novo -> prox = inicio;
            inicio = novo;
        }
        else {
            int i;
            No* aux = inicio;
            for (i = 0; i < posicao - 1; i++) {
                aux = aux -> prox;
            }
            novo -> prox = aux -> prox;
            aux -> prox = novo;
        }
        tam++;
    }
    else {
        printf("Posição inválida !!\n");
    }
}

void imprimir_reverso (No* aux)
{
    if (aux != NULL) {
        imprimir_reverso (aux -> prox);
        printf("%d ",aux -> id);
    }
}

/*         PILHA:
 *
 *   | imprimir (NULL) |
 *   | imprimir (5)    |
 *   | imprimir (3)    |
 *   | imprimir (2)    |
 *   | imprimir (0)    |
 *   | main ()         |
 *
 */

int main (void) { 
    adicionar (0, 2);
    adicionar (1, 3);
    adicionar (0, 0);
    adicionar (3, 5);
    
    imprimir_reverso (inicio);
    return 0;
}
