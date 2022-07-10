#include <stdio.h>
#include <stdlib.h>

// Estrutura do tipo No, com os atributos/campos: valor e Prox
// valor representa: "O valores do meu No"
// Prox é um ponteiro do tipo No, que funciona como mecanismo de unir os Nos, Prox guarda endereço de Nos
typedef struct No {
  int valor; // 4bytes de um inteiro
  struct No *Prox; // 4bytes do pointer 
  // totalizando 8bytes
}No;

No *inicio = NULL; // inicio -> NULL, i.e, a lista está "vazia"
int tam = 0;

void adicionar (int valor, int pos) {
  if (pos >= 0 && pos <= tam) {
    
    No *NOVO = malloc (sizeof(No)); // alocamos na memória o espaço para o No NOVO, NOVO vai deter o endereço retornado por malloc()
    // Setando/copulando os valores:
    NOVO -> valor = valor; // atribuimos o valor passa para a funcao por meio do parâmetro a variável valor do NOVO.
    NOVO -> Prox = NULL;  // atribuimos um valor nulo para o ponteiro Prox desse No

    if (inicio == NULL) { // verificamos se a nossa lista ainda não foi iniciada, i.e, lista vazia
      inicio = NOVO; // portanto, inicio -> Nó [valores] -> NULL
    }
    else if (pos == 0) { // verificamos se o novo No vai ser inicio da nossa lista 
      NOVO -> Prox = inicio;
      inicio = NOVO;
    }
    else { // em ultimo caso ficará no fim ou no meio da lista
      No *aux;
      aux = inicio;
      for (unsigned int i = 0; i < pos - 1; i++) { // suponha que pos = 2
        aux = aux -> Prox;
      }
        NOVO -> Prox = aux -> Prox;
        aux  -> Prox = NOVO; 
    } 
    tam++; // adicionamos um ao tamanho da lista
  }
}

// Função principal
int main (void) {
  
  adicionar (10, 0);
  adicionar (20, 1);
  adicionar (30, 2);
  adicionar (30, 3);  
   
  return 0;
}
