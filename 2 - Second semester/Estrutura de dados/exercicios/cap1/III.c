// Exercício III. Resolução:
#include <stdio.h>
#include <stdlib.h>

typedef struct Aviso_Covid {
  int coronaASolta; // 4 bytes
  struct Aviso_Covid *fiqueEmCasa; // mecanismo para unir os Nos, 4 bytes
}Corona;

int main (void) {
  Corona *laveAsMaos, *useAlcool; // Declarando dois ponteiros do tipo Corona que vão poder apontar para uma estrutura.
  
  laveAsMaos = malloc (sizeof(Corona)); // [1byte][][][][][][][] = 8bytes, malloc() retorna o endereço do 1byte
    
  useAlcool  = malloc (sizeof(Corona)); // [1byte][][][][][][][] = 8bytes, ...
                                       //  end...
  // copulando os Nos.
  laveAsMaos -> coronaASolta = 19;
  laveAsMaos -> fiqueEmCasa = useAlcool;
  useAlcool  -> coronaASolta = 100;
  useAlcool  -> fiqueEmCasa = NULL;
  
  printf("Cuidado com o COVID-%d! Fique %d porcento dentro de casa lendo o livro de ED!\n", laveAsMaos -> coronaASolta, useAlcool -> coronaASolta);
  printf("%zu",sizeof(Corona));
  return 0;
}
