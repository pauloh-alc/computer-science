#include <stdio.h>
#include <stdlib.h>

typedef struct Aviso_Covid {
  int coronaASolta; // 4 bytes
  struct Aviso_Covid *fiqueEmCasa; // 4 bytes
}Corona;
// total = 8 bytes [1byte][...][...][...][...][...][...][...]

int main (void) {
  Corona *laveAsMaos, *useAlcool;
  //                                      | end |
  laveAsMaos = malloc (sizeof(Corona));// [1byte][][][][][][][]
  useAlcool  = malloc (sizeof(Corona));// [1byte][][][][][][][]
  //                                      | end |
  // laveAsMaos = vai deter o end (endereço) do 1° byte alocado por malloc()
  // useAlcool  = vai deter o end (endereço) do 1° byte alocado por malloc()

  laveAsMaos -> coronaASolta = 19;
  
  laveAsMaos -> fiqueEmCasa = useAlcool; // utilizando o mecanismo de ligação
  
  useAlcool -> coronaASolta = 100;
  
  useAlcool -> fiqueEmCasa = NULL; // utilizando o mecanismo de ligação

  printf("Cuidado com o COVID-%d! Fique %d porcento dentro de casa lendo o livro de ED!\n",laveAsMaos -> coronaASolta, useAlcool -> coronaASolta);

  return 0;
}
