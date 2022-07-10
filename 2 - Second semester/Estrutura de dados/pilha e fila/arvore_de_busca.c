/* Algoritmo de uma árvore binária de busca 
 *  
 *  Definição:
 *
 *  Árvore binária - é um grafo, conexo e acíclico que possui no máximo dois filhos
 *  e possui a seguinte regra: o filho ESQUERDO de um determinado vértice deve ter CHAVE
 *  MENOR que a chave do pai. E o filho DIREITO deve ter uma CHAVE MAIOR que a do pai. 
 *  
 * */
#include <stdio.h>
#include <stdlib.h>


typedef struct no{
    int valor;
    struct no* esq;
    struct no* dir;
} NO;

NO* raiz = NULL;


// Função: realiza a busca de um determinado elemento na Árvore binária de busca.
NO* busca_arvore (int x, NO* aux) {
    if (aux == NULL) { // Árvore Vazia !!
        return NULL; // return 0; 
    }
    else if (x == aux -> valor) {
        return aux; // Encontrei o elemento que eu estava procurando
        // return 1;
    }
    else if (x < aux -> valor) {
        if (aux -> esq != NULL) {
            return busca_arvore (x, aux -> esq);
        }
        else {
            return aux; // elemento não está na arvore, mas se tivesse 
                      // ficaria no Lado Esquerdo. 
            // return 2;
        }
    }
    else if (x > aux -> valor) { // bastava o [else]
        if (aux -> dir != NULL) {
            return busca_arvore (x, aux -> dir);
        }
        else {
            return aux; // elemento não está na árvore, mas se tivesse
                      // ficaria no Lado direito.
            // return 3;
        }
    }
}


// Procedimento: responsável por add um elemento em minha árvore.
void add (int x) {
    NO* resp = busca_arvore(x, raiz);
    
    if (resp == NULL || resp -> valor != x) { // resp == NULL árvore está vazia, resp -> valor != x elemento que quero add, não tá na árvore 
        // Criando o nó
        NO* novo = (NO*) malloc (sizeof(NO));
        novo -> valor = x;
        novo -> esq = NULL;
        novo -> dir = NULL;
      
        if (resp == NULL) {
            raiz = novo;
        }
        else {
            // Em qual lado colocar: lado direito ou lado esquerdo?
            if (x < resp -> valor) resp -> esq = novo;
            else                   resp -> dir = novo;
        }
     } 
     else {
        printf("Elemento já existe na árvore binária de busca.\n");
     }
}


// Função: responsável por realizar uma busca. 
NO* buscar (int x) {
    NO* resp = busca_arvore(x, raiz);
    
    if (resp == NULL) { // Árvore vazia
        return NULL;
    }
    else { // != NULL
        if (resp -> valor == x) { // Achei o elemento
            return resp;
        }
        else {
            return NULL; // não achei o elemento
        }
    }
}


// Procedimento: responśavel por imprimir elmentos da Árvore binária de busca in-order;
void in_ordem (NO* aux) {
    if (aux -> esq != NULL) {
        in_ordem (aux -> esq);
    }

    printf("%d ",aux -> valor);

    if (aux -> dir != NULL) {
        in_ordem (aux -> dir);
    }
}


// Função principal:
int main (void) {
    add (9);
    add (7);
    add (4);
    add (0);
    add (14);
    add(3);
    add(20);
    add(35);
    add(10);
    in_ordem(raiz);
    return 0;
}
