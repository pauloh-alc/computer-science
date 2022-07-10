#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int valor;
  struct no *Prox; // mecanismo para unir os Nos
} No;


int main (void) {

  No* NOVO = malloc (sizeof(No));
  NOVO -> valor = 18;
  NOVO -> Prox = NULL;

  printf("NOVO -> valor = %d \n",NOVO -> valor);
  
  NOVO -> valor = 15;
   
  printf("%d\n",NOVO -> valor);  
  return 0;
}
