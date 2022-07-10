#include <stdio.h>

// Processamento:
void fib (int n)
{
    int i, f = 1, a = 0;
    
    if (n > 0) printf("0 ");

    for (i = 0; i < n - 1; i++) {
        printf("%d ",f);
        f = f + a;
        a = f - a;
    }
}

int main(void) {
    
    int n;

    // Entrada de dados:
    printf("Entre com um valor de n, onde n >= 0: ");
    scanf("%d",&n);
    
    // chamada da função:
    fib(n);
    return 0;
}
