#include <stdio.h>
#include <stdlib.h>
// Estrutura do tipo Corona com os valores: coronaASolta.
// mecanismo de união: fiqueEmCasa.
//
typedef struct Aviso_Covid {
  int coronaASolta; // 4bytes
  struct Aviso_Covid *fiqueEmCasa; // 4bytes
} Corona;

int main (void) {
  Corona *laveAsMaos, *useAlcool; // Esse ponteiros vão deter endereços de estruturas.
  
  laveAsMaos = malloc (sizeof(Corona)); // laveAsMaos vai deter o endereço retornado por malloc() (1° byte alocado por malloc)
  useAlcool  = malloc (sizeof(Corona)); // useAlcool vai deter o endereço retornado por malloc
  
  laveAsMaos -> coronaASolta = 19;
  laveAsMaos -> fiqueEmCasa = useAlcool; // utilizando o mecanismo de união

  useAlcool -> coronaASolta = 100;
  useAlcool -> fiqueEmCasa = NULL; // utilizando o mecanismo de união

  printf("Cuidado com o COVID-%d! Fique %d porcento dentro de casa lendo o livro de ED!\n", laveAsMaos -> coronaASolta,  useAlcool -> coronaASolta);

  return 0;
}
