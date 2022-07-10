#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int id;
    struct no *prox;
}NO;

//ENCADEADA


NO* inicio= NULL;
NO* fim = NULL;
int tam = 0;

void adicionar(int id){
    
    NO *novo = malloc (sizeof(NO));
    novo->id = id;
    novo->prox = NULL;
    
    if(tam == 0){
        inicio = novo;
        fim = novo;
    }else{
        fim->prox = novo;
        fim = novo;
    }
    tam++;
}


int remover(){
    if(tam > 0){
        NO *lixo = inicio;
        if(tam == 1){
            inicio = NULL;
            fim = NULL;
        }else{
            inicio = inicio->prox;
        }
        int aux = inicio->id;
        free(lixo);
        tam--;
        return aux;
    }else{
        printf("Fila esta vazia :/\n");
        return -1;
    }
}
    
void imprimir(){
    NO *aux = inicio;
    while (aux != NULL){
        printf("%d ", aux->id);
        aux = aux->prox;
    }
}

int main(){
    adicionar(10);
    adicionar(7);
    adicionar(5);
    adicionar(3);
    remover();
    remover();
    adicionar(8);
    imprimir();
 
}



