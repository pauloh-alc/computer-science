#include <stdio.h>
#include <stdlib.h>
// Estou trabalhando com uma LDE

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

void adicionar (int posicao, char* nome, int num_conta, int senha, float saldo)
{
    if (posicao >= 0 && posicao <= tamanho) {
        CB* novo = (CB*) malloc (sizeof(CB));
        novo -> nome = nome;
        novo -> num_conta = num_conta;
        novo -> senha = senha;
        novo -> saldo = saldo;
        
        novo -> prox = NULL;
        novo -> ant  = NULL;
        

        if (inicio == NULL) { //............. Complexidade: O(1) - Constante
            inicio = novo;
            fim    = novo;
        }
        else if (posicao == 0) { //.......... Complexidade: O(1) - Constante
            novo -> prox = inicio;
            inicio -> ant = novo;
            inicio = novo;
        }
        else if (posicao ==  tamanho) { // .. Complexidade: O(1) - Constante
            novo -> ant = fim;
            fim -> prox = novo;
            fim = novo;
        }
        else { //........................... Complexidade: O(n) - Linear
            CB* aux = inicio;
            int i;
            for (i = 0; i < posicao; i++) {
                aux = aux -> prox;
            }
            novo -> prox = aux;
            aux -> ant -> prox = novo;

            novo -> ant = aux -> ant;
            aux -> ant = novo;
        }
        tamanho += 1;
    }
}

int remover (int posicao) 
{   
    int num_conta_removida;
    if (posicao >= 0 && posicao < tamanho) {
        CB* lixo;
        if (posicao == 0) { //.................. Complexidade: O(1) - Constante
            lixo = inicio;
            inicio = inicio -> prox;
            inicio -> ant = NULL;
        }
        else if (posicao == tamanho - 1) { //... Complexidade: O(1) - Constante
            lixo = fim;
            fim = fim -> ant;
            fim -> prox = NULL;
        }
        else { //.............................. Complexidade: O(n) - Linear
            CB* aux = inicio;
            int i;
            for (i = 0; i < posicao; i++) {
                aux = aux -> prox;
            }
            lixo = aux;
            aux -> prox -> ant = aux -> ant;
            aux -> ant -> prox = aux -> prox;
        }
        num_conta_removida = lixo -> num_conta;
        free(lixo);
        tamanho -= 1;
    }
    return num_conta_removida;
}


void visualizar () // Complexidade: O(n) - Linear
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
    adicionar (0, "Paulo", 123, 1, 10);
    adicionar (1, "Gabriel" ,1234,2, 11);
    adicionar (1, "Manoel", 12345, 3, 12);
    visualizar ();
    
    printf("\nExibição após utilizar remover (): \n");
    int removido = remover (1);
    visualizar ();

    printf("A conta removida foi: %d \n",removido);
    return 0;
}
