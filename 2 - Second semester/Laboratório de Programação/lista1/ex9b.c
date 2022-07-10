#include <stdio.h>

// Função: calcula o fatorial de um número.
int fat (int valor) 
{   
    int f = 1, i;

    for (i = valor; i > 0; i--) {
        f = f * i;
    }
    return f;
}

int main (void) {
  int n, k;
  float resultado;
  
  do {
      printf("Entre com o valor de n e k (sendo que n >= k): ");
      scanf("%d %d",&n,&k);
  } while (n < k);

    
  resultado = fat(n) / (fat(k) * fat(n - k));
  printf("Resultado =  %f \n", resultado);
  return 0;
}
