#include <stdio.h>

typedef struct no {
    int chave;
    //...
    struct no *esq;
    struct no *dir;
} NO;


NO* raiz = NULL;

NO* busca (int x, NO *aux) {
    
    // 1 - caso: arvore vazia
    if (aux == NULL) {
        return 0;
    }
    // 2 - caso: encontrei a chave
    else if (x == aux -> chave) {
        return 1;
    }
    // 3 - caso: não encontrei, preciso buscar no resto da árvore
    else if (x < aux -> chave) {
        if (aux -> esq != NULL) {
            return busca(x, aux -> esq);
        }
        else {
            return 2; // não encontrei, mas ele deveria estar no lado esquerdo.
        }
    }
    // 4 - caso: não encontrei, preciso buscar no resto da árvore
    else {
        if (aux -> dir != NULL) {
            return busca(x, aux -> esq);
        }
        else {
            return 3; // não encontrei, mas ele deveria estar no lado direito.
        }
    }
}
