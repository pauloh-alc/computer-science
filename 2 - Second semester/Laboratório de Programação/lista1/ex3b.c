// Exercício 3 b) - Resolução
#include <stdio.h>

int perfeito (int n) 
{   
    int i, soma = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        } 
    }

    if (soma == n) return i;
    else           return 0;
}

int main (void) {
    
    int x, y, i, soma_p = 0, valor;
  
    do {
        printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
        scanf("%d %d",&x,&y);
    } while (x >= y);
    
    for (i = x; i <= y; i++) {
        valor = perfeito(i);
        soma_p += valor;
    }
  
    printf("A soma dos números perfeitos do intervalo [%d, %d] é: %d \n", x, y, soma_p);
    return 0;
}

