#include <stdio.h>
#include <stdlib.h>

typedef int tInfo;

typedef struct no {
    tInfo info;
    struct no *proximo;
} tNo;

typedef struct {
    tNo* primeiro;
    tNo* marcador;
    tNo* ultimo;
    int tam;
} tLista;

void imprimeInfo (tInfo info) {
    printf("Elemento: %d\n",info);
}

void inicia (tLista* lista) {
    lista -> primeiro = NULL;
    lista -> marcador = NULL;
    lista -> ultimo = NULL;
    lista -> tam = 0;
}

int final (tLista* lista) {
    return (lista -> marcador == NULL);
}

int vazia (tLista* lista) {
    return (!lista -> tam);
}
tNo* criaNo (tInfo elem) {
    tNo* no;

    no = (tNo*) malloc (sizeof(tNo));
    no -> info = elem;
    no -> proximo = NULL;

   return no; 
}

int main (void) {
    tNo* inicio = criaNo(1);

    imprimeInfo (inicio -> info);
    return 0;
}
