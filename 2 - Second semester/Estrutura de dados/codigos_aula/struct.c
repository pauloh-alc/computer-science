#include <stdio.h>

// Isso é apenas o escopo / estou definindo o formato
struct No {
    int valor; // 4bytes
    struct No *Prox; // 4 bytes
};

int main (void) {
  struct Pessoa *p = malloc (sizeof(struct Pessoa))
  p -> valor = 50;

  struct No n1; // definindo as variáveis, alocou 4 bytes para o n1
  struct No n2; //                       , alocou 4 bytes para o n2
  int a = 10;
  int *b = &a;

  printf("%d",a);
  printf("%d",*b);
 
  n1.valor = 50; // n1 [  50  ]
  n2.valor = 30; // n2 [  30  ]

    

}
