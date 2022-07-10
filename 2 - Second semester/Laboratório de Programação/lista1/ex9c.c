#include <stdio.h>

int fat (int n) 
{
  int i, fat = 1;
  for (i = n; i > 0; i--) {
      fat = fat * i;
  }

  return fat;
}


void triangulo (int k)
{
  int i, j, numero;
  
  for (i = 0; i <= k + 1; i++) {
      for (j = 0; j <= i; j++) {
          numero = fat(i) / (fat(j) * fat(i-j));
          printf("%d ",numero);
      }
  printf("\n");
  }

}

int main (void) {
  int k;
  printf("Entre com um valor de k: ");
  scanf("%d",&k);

  triangulo(k);

  return 0;
}
