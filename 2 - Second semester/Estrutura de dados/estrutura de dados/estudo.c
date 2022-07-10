#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Estrutura do tipo Cartão com os valores: nome, num, codigo de segurança
// mecanismo de união é: prt
typedef struct cartao {
  
  char nome[20];
  long int num;
  int codigoSeguranca; 
  struct cartao *ptr;

} Cartao;

int main (void) {
  Cartao *c1 = malloc (sizeof(Cartao));
  Cartao *c2 = malloc (sizeof(Cartao));
  Cartao *c3 = malloc (sizeof(Cartao));

  printf("sizeof(Cartao) = %zu bytes\n",sizeof(Cartao));

  strcpy(c1 -> nome, "Paulo");
  c1 -> num  = 5226252266703721; 
  c1 -> codigoSeguranca = 219;

  printf("Cartão 1:\nNome: %s (número do cartão: %ld, código de segurança = %d)\n", c1->nome, c1->num, c1->codigoSeguranca);
  
  c1 -> ptr = c2; // utilizando mecanismo de ligação

  strcpy(c2 -> nome, "Luara");
  c2 -> num = 5307663649440751;
  c2 -> codigoSeguranca = 663;

  printf("Cartão 2:\nNome: %s (número do cartão: %ld, código de segurança = %d)\n", c2->nome, c2->num, c2->codigoSeguranca);
  
  c2 -> ptr = c3; // utilizando mecanismo de ligação
  
  strcpy(c3 -> nome, "Luan");
  c3 -> num = 5226317876311551;
  c3 -> codigoSeguranca = 661;
  
  printf("Cartão 3:\nNome: %s (número do cartão: %ld, código de segurança = %d)\n", c3->nome, c3->num, c3->codigoSeguranca); 

  c3 -> ptr = NULL; // utilizando mecanismo de ligação
  
  return 0;
}
