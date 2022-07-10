// Exercício 8 - resolução
#include <stdio.h>

int main (void) {
  float pi;
  int i, n, x;

  do {
      printf("Entre com um número n, onde n > 0: ");
      scanf("%d",&n);
  } while (n <= 0);
  
  x = 1;
  for (i = 0; i < n; i++) {
      if (i % 2 == 0) pi = pi + 4.0 / x;
      else            pi = pi - 4.0 / x;
  x += 2;
  }

  printf("𝝅 = %f \n",pi);
  return 0;
}
