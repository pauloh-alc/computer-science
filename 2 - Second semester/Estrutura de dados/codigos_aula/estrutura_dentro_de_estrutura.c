#include <stdio.h>

typedef struct pessoa {
  float peso;
  int idade;
  float altura;
}Pessoa;


typedef struct trabalhador {
  Pessoa T1;
  long int cpf;
}Trabalhador;


int main (void) {
  Trabalhador empresa;
  
  empresa.T1.peso = 65.5;
  empresa.cpf = 123123123;
  printf("empresa.T1.peso = %f ",empresa.T1.peso);
  printf("empresa.cpf = %ld",empresa.cpf);
  return 0;
}
