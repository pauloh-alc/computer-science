// Exercício IV. Resolução:
#include <stdio.h>

void func (int *x, int *y) 
{
  int c = *x; // c = 1
  *x = *y;    // a = 10
  *y = c;     // b = 1
}

int main (void) {
  int a = 1;
  int b = 10;
  
  printf("Antes:\n a = %d, b = %d \n",a,b);
  func (&a, &b);
  printf("Depois:\n a = %d, b = %d \n",a,b);
  return 0;
}
