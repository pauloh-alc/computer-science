#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void menu ()
{
    puts("[1] Cadastrar conta");
    puts("[2] Remover conta");
    puts("[3] Visualizar contas cadastradas");
    puts("[4] Depositar");
    puts("[5] Sacar");
    puts("[6] Mostrar saldo de conta específica");
    puts("[0] sair");
}

void adicionar_ordenado (char* nome, int num_conta, int senha) 
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

int remover (int num_conta) 
{   
    CB* aux = inicio;
    CB* lixo;

    if (tamanho == 1 && num_conta == inicio -> num_conta) {
        lixo = inicio;
        inicio = NULL;
        fim    = NULL;
        free(lixo);
        tamanho -= 1;    
    }    
    else if (tamanho > 1 && num_conta == inicio -> num_conta) {
        lixo = inicio;
        inicio = inicio -> prox;
        inicio -> ant = NULL;
        free(lixo);
        tamanho -= 1;
    }
    else if (tamanho > 1 && num_conta == fim -> num_conta) {
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
                aux -> prox -> ant = aux -> ant;
                aux -> ant -> prox = aux -> prox;
                free(lixo);
                tamanho -= 1;
                break;
            }
            aux = aux -> prox;
        }
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
    printf("\n\n");
}

int depositar (int num_conta, int senha, float valor) 
{   
    CB* aux = inicio;
    while (aux != NULL) {
        if (num_conta == aux -> num_conta) {
            if (senha == aux -> senha) {
                aux -> saldo = aux -> saldo + valor;
                return 1; 
            }
            else {
                printf("A senha informada é inválida\n");
                return 0;
            }
        }
        aux = aux -> prox;
    }
    return -1;
}

int sacar (int num_conta, int senha, float valor)
{
    CB* aux = inicio;
    while (aux != NULL) {
        if (num_conta == aux -> num_conta) {
            if (senha == aux -> senha) {
                if (aux -> saldo < valor) {
                    printf("Saldo insuficiente para esse valor de saque. \n");
                    printf("Saldo: R$ %f \n",aux -> saldo);
                }
                aux -> saldo = aux -> saldo - valor;
                return 1;
            }
            else {
                printf("A senha informada é inválida\n");
                return 0;
            }
        }
        aux = aux -> prox;
    }
    return -1;
}

int comprimento (char *nome) 
{
    char *i = nome;
    int qtd = 0;
    while (*i != '\0') {
        i = i + 1;
        qtd++;
    }
    return qtd;
}

int main (void) {
    int op;
    
    while (1) {
        menu ();
        printf("Entre com um opção: ");
        scanf("%d",&op);
        __fpurge(stdin);

        if (op == 0) break;
        
        switch (op) {
            case 1: { 
                char nome_entrada[50];
                int num_conta, senha;
                char* nome;

                printf("Nome da pessoa.: ");
                scanf("%[^\n]s",nome_entrada); 
             
                printf("Número da conta: ");
                scanf("%d",&num_conta);
              
                printf("Senha..........: ");
                scanf("%d",&senha);
                
                int tamanho = comprimento (nome_entrada);
                nome = (char*) malloc ((tamanho+1) * sizeof(char));
                strcpy(nome, nome_entrada);
                    
                adicionar_ordenado (nome, num_conta, senha);  
            } break;
            
            case 2: {
                int numero_conta;
                
                printf(".... Remover conta ....\n");
                printf("Número da conta: ");
                scanf("%d",&numero_conta);
                
                remover (numero_conta);    
            } break;

            case 3: {
                visualizar ();        
            } break;
            
            case 4: {
                int numero_conta;
                int senha;
                float valor;
                int retorno;

                printf(".... Depositar ....\n");
                printf("Número da conta: ");
                scanf("%d",&numero_conta);

                printf("Valor à depositar: ");
                scanf("%f",&valor);
                
                do {
                    printf("Senha..........: ");            
                    scanf("%d",&senha);
                    retorno = depositar (numero_conta, senha, valor);        
                } while (retorno == 0);
                

                if (retorno == 1) printf("Deposito feito com sucesso :D \n");
                else              printf("Não encontramos essa conta :( \n");

                printf("\n");

            } break;

            case 5: {    
                int numero_conta;
                int senha;
                float valor;
                int retorno;

                printf(".... Sacar ....\n");
                printf("Número da conta: ");
                scanf("%d",&numero_conta);

                printf("Valor à sacar: ");
                scanf("%f",&valor);
                
                do {
                    printf("Senha..........: ");            
                    scanf("%d",&senha);
                    retorno = sacar (numero_conta, senha, valor);        
                } while (retorno == 0);
                

                if (retorno == 1) printf("Saque feito com sucesso :D \n");
                else              printf("Não encontramos essa conta :( \n");
 
                printf("\n");

            } break;

            case 6: {
                    
            } break;
        }
    }

    return 0;
}
