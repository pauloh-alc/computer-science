#include <stdio.h>

//              n-2 n-1  n  n+1
//sequência: 0,  1,  1,  2,  3, 5, 8, 13...
// índice    1   2   3   4   5  6  7  8

// fib(1) = 0 --> padrão 
// fib(2) = 1 --> padrão
// fib(3) = fib(1) + fib(2) = 1
// fib(4) = fib(2) + fib(3) = 2
// fib(5) = fib(3) + fib(4) = 3
// fib(6) = fib(4) + fib(5) = 5

// fib(n) = fib(n-2) + fib(n-1);

int fib (int n)
{
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n > 2) {
        return fib(n-2) + fib(n-1);   
    }
}

int main (void) {
    int n, i;
    
    // Entrada: 
    printf("Entre com um valor para n, onde n >= 0: ");
    scanf("%d",&n); // n° termos 
    
    for (i = 1; i <= n; i++) {
        int retorno = fib(i);
        printf("%d ", retorno);
    }
    return 0;
}
