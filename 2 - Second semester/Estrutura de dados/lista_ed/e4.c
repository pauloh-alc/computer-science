#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
    int numero;
    bool booleano; 
    struct no *prox;   
} NO;

NO *inicio = NULL;
NO *fim    = NULL;
int tamanho = 0;

// Procedimento: responsável por adicionar os elementos em minha lista encadeada.
void adicionar (int posicao, int numero)
{
    if (posicao >= 0 && posicao <= tamanho) {
        
        NO *novo = (NO*) malloc (sizeof(NO));
        novo -> numero = numero; 
        novo -> prox = NULL;

        if (numero > 0) novo -> booleano = true;
        else            novo -> booleano = false;

        if (inicio == NULL) { //.......... O(1) - constante
            inicio = novo;
            fim    = novo; 
        }
        else if (posicao == 0) { //....... O(1) - constante
            novo -> prox = inicio;
            inicio = novo;
        }
        else if (posicao == tamanho) { //. Como tem o ponteiro 'fim' fica O(1) - constante
            fim -> prox = novo;
            fim = novo;
        }
        else { //......................... Como precisa precorrer a lista até determinada posição, temos O(n) - Linear
            NO *aux = inicio;
            int i;
            for (i = 0; i < posicao - 1; i++) {
                aux = aux -> prox;
            }
            novo -> prox = aux -> prox;
            aux -> prox = novo;
        }
    tamanho += 1;
    }
    else {
        printf("Posição fornecida é inválida !! \n");
    }
}

// Função: revove determinado elemento dada uma posição.
int remover (int posicao)
{   
    int removido;
    if (posicao >= 0 && posicao < tamanho) {
        NO *lixo;
        if (posicao == 0) { //.......... O(1) - constante
            lixo = inicio;
            inicio = inicio -> prox;
        }
        else { //....................... Como não temos o ponteiro 'ant', remover no fim e no meio é O(n) - Linear
            NO *aux = inicio;
            int i;
            for (i = 0; i < posicao - 1; i++) {
                aux = aux -> prox;
            }
            lixo = aux -> prox;
            aux -> prox  = aux -> prox -> prox;
        }
        removido = lixo -> numero;
        free(lixo);
    tamanho -= 1;
    }
    else{
        printf("Posição inválida !!\n");
    }
    return removido;
}

// Procedimento: responsável por exibir os elementos da minha lista encadeada. O(n) - Linear
void imprimir () 
{
    NO *i;
    for (i = inicio; i != NULL; i = i -> prox) {
        printf("Número...........: %d\n", i -> numero);
        printf("Atributo booleano: %d\n\n", i -> booleano);
    }
    printf("\n");
}


// Função: responsável por retornar o atributo booleano deste elemento.
bool buscar (int numero, int *p) // Complexidade O(n) - Linear, pois preciso percorrer, no pior caso até a última posição da lista encadeada.
{
    NO* i;
    for (i = inicio; i != NULL; i = i -> prox) {
        if (i -> numero == numero) {
            return i -> booleano;
        }
    }
    
    *p = 1; 
    return false;
} 


// Procedimento: responsável por remover todos os elementos negativos da minha lista encadeada.
void remover_negativos ()
{
    NO* aux = inicio;
    int cont = 0;
    NO* lixo; 

    while (aux != NULL) {
        if (aux -> numero < 0) {
            if (aux == inicio) { // primeira posição
                lixo = inicio;
                inicio = inicio -> prox;
                aux = aux -> prox;
                free(lixo);
                tamanho -= 1;
            }
            else {              // "meio" ou fim
                
                NO* aux2 = inicio;
                int i;
                for (i = 0; i < cont - 1; i++) {
                    aux2 =  aux2 -> prox;
                } 

                lixo = aux2 -> prox;
                aux2 -> prox = aux2 -> prox -> prox;
   
                aux = aux -> prox;
                free(lixo);
                tamanho -= 1; 
            }
        }
        else {
            aux = aux -> prox;
            cont += 1;
        }    
    }
}


int main (void) {
    
    adicionar (0, -1);
    adicionar (1,  2);
    adicionar (2, -3);
    adicionar (3,  4);
    adicionar (4, -5); 
    adicionar (5, -6);
    adicionar (6, -7);
    adicionar (7, 8);
    adicionar (0, -1);
    adicionar (1, -2);
    adicionar (2, 3);
    adicionar (0,-9);

    printf(".... Lista ....\n");
    imprimir ();
    
    
    printf("\n\nExibição após remoção: \n\n");
    remover_negativos();
    imprimir ();


    int aviso = 0;
    bool elemento = buscar (4, &aviso);
    
    if (aviso == 1) {
        printf("Elemento não encontrado !!\n");
    }
    else if (elemento) {
        printf("%d - true\n",elemento);
    }
    else {
        printf("%d - false\n",elemento);
    }
    
    return 0;
}
