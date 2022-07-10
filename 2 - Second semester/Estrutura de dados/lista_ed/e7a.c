#include <stdio.h>
#include <stdlib.h>

typedef struct cb {
    char* nome;
    int num_conta;
    int senha;
    float saldo;
    struct cb *prox;
    struct cb *ant;
} CB;

CB* inicio = NULL;
CB* fim    = NULL;
int tamanho = 0;

void adicionar_ordenado (char* nome, int num_conta, int senha, float saldo) 
{   
    CB* novo = (CB*) malloc (sizeof(CB));
    novo -> nome = nome;
    novo -> num_conta = num_conta;
    novo -> senha = senha;
    novo -> saldo = 0;

    novo -> prox = NULL;
    novo -> ant  = NULL;

    if (inicio == NULL) { //................................................. Add em lista "vazia".  Complexidade: O(1) - Constante
        inicio = novo;
        fim    = novo;
        tamanho += 1;
    }
    else if (novo -> num_conta >= fim -> num_conta) { // .................... Add no fim da lista. Complexidade: O(1) - Constante
        fim -> prox = novo;
        novo -> ant = fim;
        fim = novo;
        tamanho += 1;
    }
    else if (novo -> num_conta <= inicio -> num_conta && tamanho >= 1) { // . Add no inicio da lista. Complexidade: O(1) - Constante
        inicio -> ant = novo;
        novo -> prox = inicio;
        inicio = novo;
        tamanho += 1;
    }
    else { //................................................................ Add no "meio" da lista. Complexidade: O(n) - Linear
        CB* aux = inicio;

        while (aux != NULL) {
            if (novo -> num_conta >= aux -> num_conta && novo -> num_conta <= aux -> prox -> num_conta) {
                aux = aux -> prox;
                
                novo -> prox = aux;
                novo -> ant = aux -> ant;
                aux -> ant -> prox = novo;
                aux -> ant = novo;
                break;
            }
            aux = aux -> prox;
        }
        tamanho += 1; 
    }
}

void visualizar ()
{   
    CB* aux;
    aux = inicio;

    printf("\t.... Conta-Bancária ....\n");
    while (aux != NULL) {
        printf("Dono da conta..: %s \n",aux -> nome);
        printf("Número da conta: %d \n",aux -> num_conta);
        printf("Senha..........: %d \n",aux -> senha);
        printf("Saldo..........: %f \n",aux -> saldo);
        printf("\n");
        aux = aux -> prox;
    }
}

int main (void) {
    adicionar_ordenado ("Paulo", 3, 1, 1);
    adicionar_ordenado ("Gabriel", 1, 1, 1);
    adicionar_ordenado ("Manoel", 0, 1, 1);
    adicionar_ordenado ("Teixeira", 2, 1, 1);
    adicionar_ordenado ("Rafael", 1, 1, 1);
    adicionar_ordenado ("Fhelipe", 10, 1, 1);
    adicionar_ordenado ("Leonam", 7, 1, 1);
    adicionar_ordenado ("Valdomiro",5, 1, 1);
    visualizar ();
    return 0;
}
