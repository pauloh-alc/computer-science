#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int valor;
  struct no *ptr;
}No;

int main (void) {
  printf("sizeof(No) = %zu bytes.\n",sizeof(No));
  No *NOVO = malloc (sizeof(No));

  //       = [1byte][...][...][...]  = 4bytes
  //         | end  |    |    |    | endereços
  //         | 500  |501 |502 |503 |
  // NOVO é um ponteiro que vai deter o endereço do 1° byte que malloc() alocou na memória RAM.
  // NOV0 = 500
  //                                 ptr
  // NOVO --> [                    ] --> NULL
  NOVO -> valor = 18;
  NOVO -> ptr = NULL;
 
 

  
  return 0;
}
