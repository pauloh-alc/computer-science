#include <stdio.h>
#include <stdlib.h>
typedef struct no{
  int valor;
  struct no *prox;
}No;

int tam = 0;
No *inicio = NULL;

void adicionar(int valor, int pos){
  if(pos >=0 && pos <= tam){
    No *novo = malloc (sizeof(No));
    novo -> valor = valor;
    novo -> prox = NULL;
    if (inicio == NULL){
      inicio = novo;
    }else if(pos == 0){
      novo->prox = inicio;
      inicio = novo;
    }else{
      No *aux = inicio;
      int i;
      for(i = 0; i < pos - 1; i++){
        aux = aux->prox;
      }  
      novo->prox = aux->prox;
      aux->prox = novo;
    }
  tam++;
  }
}

void show () {
  No* aux = inicio;
  while (aux != NULL) {
      printf("%d ",aux->valor);
  aux = aux -> prox;
  }
  printf("\n");
}

int main (){
  adicionar(3, 0);
  adicionar(14, 1);
  adicionar(15, 1);
  adicionar(9, 2);
  adicionar(26, 0);
  show();
  // 26, 3, 15, 9, 14 ordem
  return 0;
}
