#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *prox;
} No;

No* inicio = NULL;
int tam = 0;

void adicionar (int posicao, int valor) {
    if (posicao >= 0 && posicao <= tam) {
        No* novo = (No*) malloc (sizeof(No));
        novo -> valor = valor;
        novo -> prox = NULL;
        
        if (inicio == NULL) {
            inicio = novo;
        }
        else if (posicao == 0) {
            novo -> prox = inicio;
            inicio = novo;
        }
        else {
            No* aux = inicio;
            for (int i = 0; i < posicao - 1; i++) {
                aux = aux -> prox;
            }
            novo -> prox = aux -> prox;
            aux -> prox = novo;
        }
        tam++;
    }
}

int soma (No* aux) {
    if (aux == NULL) return 0;
    return aux -> valor + soma(aux -> prox);
}

void visualizar (No* aux) {
    if (aux != NULL) {        
        printf("%d ", aux -> valor);
        visualizar (aux -> prox);
    } 
}

int main (void) {
    adicionar (0,1);
    adicionar (0,0);
    adicionar (2,2);
    adicionar (3,3);
    
    visualizar (inicio);
    int s = soma(inicio);
    printf("soma = %d \n",s);
    
    return 0;
}
