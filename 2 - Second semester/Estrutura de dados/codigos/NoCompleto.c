#include <stdio.h>
#include <stdlib.h>

// Definindo um formato de uma estrutura do tipo No, com os atributos:
typedef struct no {
  int valor;
  struct no *Prox; // mecanismo para unir os Nos. Estou utilizando um ponteiro,
                   // que vai deter o endereço de um No. 
}No;

int main (void) {
  No *NOVO = malloc (sizeof(No)); // aloca 8 bytes na memória e retorna o endereço do 1° byte.
  NOVO -> valor = 18;
  NOVO -> Prox = NULL;
  return 0;
}
