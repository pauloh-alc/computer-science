// Exercício II. Resolução 
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int x = 1;
  int *p = &x;
  *p = x;
  int a = (*p);
  int *k = &a;
  x = a;
  p = k;
  a = x;

  return 0;
}
