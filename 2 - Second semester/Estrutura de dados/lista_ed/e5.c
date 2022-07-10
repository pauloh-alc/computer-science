#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char *nome;
    int num_vidas;
    struct no *prox;
    struct no *ant;
} NO;


NO *inicio = NULL;
int tam = 0;

void adicionar (char *nome, int num_vidas, int pos){

    NO* novo = malloc (sizeof(NO));
    novo -> nome = nome;
    novo -> num_vidas = num_vidas;
    novo -> prox = NULL;
    novo -> ant  = NULL;
    
    int sinalizador = 0;
    NO *aux = inicio;
    while (aux != NULL) {
        if (novo -> num_vidas == aux -> num_vidas) {
            sinalizador = 1;
            break;
        }
        aux = aux -> prox;
    } 
    if (sinalizador == 1) return;


    if (tam == 0 && pos == 0) { //......... Complexidade: O(1) - Constante 
        inicio = novo;
        tam++;
    } else if (pos == 0) { //.............. Complexidade: O(1) Constante
        novo -> prox = inicio;
        inicio -> ant = novo;
        inicio = novo;
        tam++;
    } else if (pos > 0 && pos <= tam) { //. Complexidade: O(n) - Linear
       // a)
        if (pos == tam) {
            
            NO *aux = inicio;
            int i;
            for (i = 0; i < pos - 1; i++) {
                aux = aux -> prox;
            }
            aux -> prox = novo;
            novo -> ant = aux;
            tam++;
        } 
        else {
            NO *aux = inicio;
            int i;
            for (i = 0; i < pos; i++) {
                aux = aux -> prox;
            }
            novo -> prox = aux;
            aux -> ant -> prox = novo;

            novo -> ant = aux -> ant;
            aux -> ant = novo;
            tam++;
        }
    }
     else {
        printf("Inserção inválida ! :/ \n");
    }
}


//c) A função imprimir percorre cada Nó da lista, partindo do 'inicio' até i->prox ser igual a NULL (isso indica que minha lista chegou ao fim).
// Como 'i' possui o endereço do Nó que ele está apontando, posso acessar por meio de 'i' o 'nome' e o número de vidas de cada personagem.

// Procedimento: exibe todos os personagens cadastrados - O(n) - Linear.
void imprimir(){ 
    NO* i;
    printf("... LISTA DE PERSONAGENS CADASTRADOS ...\n\n");
    for (i = inicio; i != NULL; i = i -> prox) {
        printf("Nome...........: %s \n",i -> nome);
        printf("Número de vidas: %d \n",i -> num_vidas);
    }
    printf("\n");
}

// Procedimento: realiza a remoção de um personagem dado um nome.
void remover(char *nome){
    if (tam == 1 && inicio -> nome == nome) { // O(1) - Constante
        NO *lixo = inicio;
        inicio = NULL;
        free(lixo);
        tam--;
    }
    else if (tam > 1 && inicio -> nome == nome) { // O(1) - Constante
        NO *lixo = inicio;
        inicio = inicio -> prox;
        inicio -> ant = NULL;
        free(lixo);
        tam--;
    }
    else { // O(n) - Linear
        NO *lixo;
        NO *aux = inicio; 
        
        while (aux -> nome != nome && aux -> prox != NULL) {
            aux = aux -> prox;
        }
        
        if (aux -> prox == NULL && aux -> nome == nome) { // removendo no fim
            lixo = aux;
            aux = aux -> ant;
            aux -> prox = NULL;
            free(lixo);
            tam--;
        }
        else if (aux -> nome == nome) { // removendo no "meio"
            lixo = aux;
            aux -> prox -> ant = aux -> ant;
            aux -> ant -> prox = aux -> prox;
            free(lixo);
            tam--; 
        } 
        else {
            printf("Personagem não encontrado !! \n");
        }   
    } 
}

//d)
// Função: retorna o nome do personagem que possui maior vida.
char* persMaisVidas (){
    NO* i = inicio;
    char *nome;

    int maior = inicio->num_vidas;
    while (i != NULL) {
        if (i -> num_vidas >= maior) {
            maior = i -> num_vidas;
            nome = i -> nome;
        }
    i = i -> prox;
    }
    
    return nome;
}


// Função: principal
int main (void) {
    
    
    adicionar ("Mario", 2, 0);
    adicionar ("Luigi", 9, 0);
    adicionar ("Princesa",7, 0);
    adicionar ("Toad",7,0);
    adicionar ("Paulo",5,3);
    imprimir ();
    
    remover ("Luigi");
    printf("Exibição após remoção: \n");
    imprimir ();

    printf("Personagem c/ mais vidas: %s \n", persMaisVidas());
    return 0;
}
