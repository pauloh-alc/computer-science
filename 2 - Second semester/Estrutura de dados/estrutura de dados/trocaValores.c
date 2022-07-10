#include <stdio.h>

// x -> a
// y -> b
void troca (int *x, int *y) {
  int aux;
  aux = *x; // aux = 10;
  *x = *y;  // a = 2;
  *y = aux; // b = 10 
}

int main (void) {
  int a, b;
  a = 10;
  b = 2;
  
  printf("Antes.: a = %d, b = %d\n", a, b);
  troca (&a, &b);
  printf("Depois: a = %d, b = %d\n", a, b);

  return 0;
}
