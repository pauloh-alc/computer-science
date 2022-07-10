#include <stdio.h>

int main (void) {
  int *p; // variável ponteiro que pode apontar para um inteiro.
  int i = 10;
  p = &i; // p --> i , i.e aponta para i; Contém o endereço de i

  printf("Endereço(i).: %p\n",p); // exibe o endereço de i, afinal 'p' é um ponteiro.
  printf("Valor de (i): %d\n",*p);// exibe o conteúdo para onde 'p' aponta, i.e, se p = 0x56555 e nesse endereço temos o valor 10, vamos imprimir esse valor.


  return 0;
}
