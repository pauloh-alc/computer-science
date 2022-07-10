#include <stdio.h>

int main (void) {
    int n, i, anterior, fib; 
    
    do {
        printf("Entre com um número inteiro e positivo: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    anterior = 0;
    fib = 1;

    printf("0 ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ",fib);

        fib = fib + anterior;
        anterior = fib - anterior;
    }
    printf("\n");   
    return 0;
}
