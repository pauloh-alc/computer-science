// Exercício 2 b) - resolução
#include <stdio.h>

int main (void) {
    int n, i;
    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0); 

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d, ",i);
        }
    }
    printf("\n");
    return 0;
}
