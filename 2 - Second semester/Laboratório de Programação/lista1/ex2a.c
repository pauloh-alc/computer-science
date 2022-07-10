// Exercício 2 a) - resolução
#include <stdio.h>

int main (void) {
    int n, m;
    
    do {
        printf("Entre com um valor para n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);

    do {
        printf("Entre com um valor para m, onde m > 0: ");
        scanf("%d",&m);
    } while (m <= 0);
    
    
    if (m % n == 0) printf("%d é divisor de %d    \n", n, m);
    else            printf("%d não é divisor de %d\n", n, m);

    return 0;
}
