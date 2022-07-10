// Exercício 2 c) - resolução
#include <stdio.h>

int main (void) {
    int n, i, soma = 0;

    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    } 

    if (soma == n) printf("%d é um número Perfeito !!\n", n);
    else           printf("%d não é um número Perfeito !!\n", n);

    return 0;
}
