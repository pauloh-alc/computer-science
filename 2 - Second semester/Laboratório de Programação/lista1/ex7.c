// Exercício 7 - resulução
#include <stdio.h>

int main (void) {
  int n, i;
  float soma;

  do {
      printf("Entre com um valor n, onde n > 0: ");
      scanf("%d",&n);
  } while (n <= 0);
  
  soma = 0;
  for (i = 1; i <= n; i++) {
     if (i % 2 != 0) soma = soma + 1.0 / i;
     else            soma = soma - 1.0 / i;
  }  
  
  printf("Soma = %f \n", soma);
  return 0;
}
