#include<stdlib.h>
#include<stdio.h>

typedef struct no{
    int valor;
    struct no *prox;
}NO;

NO *inicio = NULL;
int tam = 0;

void adicionar(int valor, int pos){
    
    if(pos>= 0 && pos<=tam){ //- LISTA - posicao valida
        
        NO *novo = malloc(sizeof(NO));
        novo->valor = valor;
        novo->prox = NULL;
        
        if(tam == 0){ //lista vazia
            inicio = novo;
        }else if(pos == 0){//inicio da lista quando a lista tem elementos
            novo->prox = inicio;
            inicio = novo;
        }else {//fim e meio da lista quando a lista tem elementos
            NO *aux = inicio;
            int i;
                       //3
            for(i=0; i<pos-1; i++){
                aux = aux->prox;
            }
            novo->prox = aux->prox;
            aux->prox = novo;
        }
        
        tam++;
    }else{
        printf("Posicao INVÁLIDA :/!\n");
    }
}

void remover(int pos){
 
    if(pos>=0 && pos<tam){ // posição válida para ser removida
        
        if(tam == 1){ //unico elemento na lista
            NO *lixo = inicio;
            inicio = NULL;
            free(lixo);
        }else if(pos == 0){//o primeiro elemento da lista e ela tem mais de um elemento
            NO *lixo = inicio;
            inicio = inicio->prox;
            free(lixo);
        }else{//no fim ou no meio e a lista tem mais de um elemento
            NO *aux = inicio;
            int i;
            for(i=0; i<pos-1; i++){
                aux = aux->prox;
            }
            
            NO *lixo = aux->prox;
            //aux->prox = NULL;
            aux->prox = aux->prox->prox;
            free(lixo);
        }
        tam--;
    }else{
        printf("Posicao INVÁLIDA :/!\n");
    }
    
    
    
}

void imprimir(){
    NO* aux = inicio;
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
}




int main(){
    adicionar(8,0); //vazia
    adicionar(10,0); //no inicio
    adicionar(7,2);  //no fim
    adicionar(5,2);  //no meio
    adicionar(3,1);  //no meio
    printf("\n Teste lista add completo.\n");
    imprimir();
    printf("\n Teste remocao do meio.\n");
    remover(2);
    imprimir();

}
