// Exercício 2 c) - Resolução
#include <stdio.h>

int main (void) {
    int n, i, div = 0;

    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);  
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            div += 1;
        }
    }  

    if (div == 2) printf("%d é Primo    \n", n);
    else          printf("%d não é Primo\n", n);

    return 0;
}
