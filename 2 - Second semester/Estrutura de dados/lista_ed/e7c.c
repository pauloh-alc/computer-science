#include <stdio.h>
#include <stdlib.h>

typedef struct cb {
    char *nome;
    int num_conta;
    int senha;
    float saldo;
    struct cb *prox;
    struct cb *ant;
} CB;

CB* inicio = NULL;
CB* fim    = NULL;
int tamanho = 0;

void adicionar (int posicao, char *nome, int num_conta, int senha, float saldo)
{
    if (posicao >= 0 && posicao <= tamanho) {
        CB* novo = (CB*) malloc (sizeof(CB));
        
        novo -> nome = nome;
        novo -> num_conta = num_conta;
        novo -> senha = senha;
        novo -> saldo = 0;

        novo -> prox = NULL;
        novo -> ant  = NULL;

        if (inicio == NULL) {
            inicio = novo;
            fim    = novo;
        }
        else if (posicao == 0) {
            novo -> prox = inicio;
            inicio -> ant = novo;
            inicio = novo;
        }
        else if (posicao == tamanho) {
            fim -> prox = novo;
            novo -> ant = fim;
            fim = novo;
        }
        else {
            CB* aux = inicio;
            int i;
            for (i = 0; i < posicao; i++) {
                aux = aux -> prox;
            }
            
            novo -> ant = aux -> ant;
            aux -> ant -> prox = novo;
            
            novo -> prox = aux;
            aux -> ant = novo;
        }
    tamanho++;
    }
}

void ordenar () 
{
    CB *i, *j, *menor;

    int cont = 0;
    int menor_conta;

    i = inicio;
    while (i != NULL) {
        
        menor_conta = i -> num_conta;

        for (j = i; j != NULL; j = j -> prox) {
            if (j -> num_conta <= menor_conta) {
                menor = j;
                menor_conta = j -> num_conta;
            }
        }
        
        if (menor == i) i = i -> prox;
        else if (cont == 0) {
            if (menor == fim) {
                fim = fim -> ant;
                fim -> prox = NULL;
            }
            else{
                menor -> ant -> prox = menor -> prox;
                menor -> prox -> ant = menor -> ant;
            }
            menor -> prox = inicio;
            inicio -> ant = menor;
            inicio = menor;
            inicio -> ant = NULL;
        }
        else {    
            if (menor == fim) {
                fim = fim -> ant;
                fim -> prox = NULL;
            }
            else{
                menor -> ant -> prox = menor -> prox;
                menor -> prox -> ant = menor -> ant;
            } 
            menor -> prox = i;
            menor -> ant = i -> ant;
            i -> ant -> prox = menor;
            i -> ant = menor;
        }
    cont += 1;
    }
}

/*
void ordenar ()
{   
    CB *i, *j, *end_do_menor;
    
    int k, menor_conta;
    char* aux_nome;
    int aux_conta;
    int aux_senha;
    float aux_saldo;
   
    for (i = inicio; i != NULL; i = i -> prox) {
        
        menor_conta = i -> num_conta;
        end_do_menor = i;

        for (j = i; j != NULL; j = j -> prox) {
            if (j -> num_conta < menor_conta) {
                end_do_menor = j;
            }
        }
        aux_nome = end_do_menor -> nome;
        aux_conta = end_do_menor -> num_conta;
        aux_senha = end_do_menor -> senha;
        aux_saldo = end_do_menor -> saldo;

        end_do_menor -> nome = i -> nome;
        end_do_menor -> num_conta = i -> num_conta;
        end_do_menor -> senha = i -> senha;
        end_do_menor -> saldo = i -> saldo;

        i -> nome = aux_nome;    
        i -> num_conta = aux_conta;
        i -> senha = aux_senha;
        i -> saldo = aux_saldo;
    }
}
*/
 
void remover (int num_conta)
{   
    CB* aux = inicio;
    CB* lixo;

    if (tamanho == 1 && num_conta == aux -> num_conta) { // Lista possui apenas um elemento.
        lixo = inicio;
        inicio = NULL;
        fim    = NULL;
        free(lixo);
        tamanho -= 1;    
    }
    else if (tamanho > 1 && num_conta == aux -> num_conta) { // Lista possui mais de um elemento, elemento a ser removido é o primeiro.
        lixo = inicio;
        inicio = inicio -> prox;
        inicio -> ant = NULL;
        free(lixo);
        tamanho -= 1;
    }
    else if (num_conta == fim -> num_conta) { // Lista possui mais de um elemento, elemento a ser removido é o último.
        lixo = fim;
        fim = fim -> ant;
        fim -> prox = NULL;
        free(lixo);
        tamanho -= 1;
    }
    else {
        while (aux != NULL) {
            if (num_conta == aux -> num_conta) {
                lixo = aux;
                aux -> ant -> prox =  aux -> prox;
                aux -> prox -> ant = aux -> ant;
                free(lixo);
                tamanho -= 1;
                break;
            }
            aux = aux -> prox;
        } 
    }

    if (inicio != NULL) ordenar ();
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
   /*
     adicionar (0, "Paulo", 2, 1, 0);
    adicionar (0, "Gabriel", 1, 1, 0);
    adicionar (2, "Teixeira", 4, 1, 0);
    adicionar (3, "Rafael", 3, 1, 0);
    adicionar (1, "Leonam",-3, 1, 0);
    visualizar ();

    remover (3);
 
   visualizar ();
    
   adicionar (4, "Fhelipe", 1, 1, 0);
   visualizar ();
   remover (-3);
   */


    for (int i = 0; i < 3; i++) {
    char* nome;
    int conta;
    int senha;

    printf("nome: ");
    scanf("%s",nome);
    printf("num_conta: ");
    scanf("%d",&conta);
    printf("senha: ");
    scanf("%d",&senha);
    adicionar (i, nome, conta, senha, 0);
    }

   visualizar ();
   return 0;
}
