#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
  float peso;
  int idade;
  float altura;
};

int main (void) {
  // Realizando alocação de memória de maneira dinâmica
  struct Pessoa *p = malloc (sizeof(struct Pessoa)); // p rebcebe o endereço do 1° byte alocado.
                                                     // p é um ponteiro que recebe um endereço de um struct Pessoa.

  printf("sizeof(struct Pessoa): %zu bytes / %zu bits\n",sizeof(struct Pessoa), sizeof(struct Pessoa) * 8);
  printf("endereço do 1° byte alocado na memória: %p\n",p);

 
  p->peso = 65.5;
  p -> idade = 40;
  p->altura = 1.85;

  printf("%p\n",p);
  
  printf("%.2f\n",p -> peso);
  printf("%d\n",p -> idade);
 
  return 0;
}
