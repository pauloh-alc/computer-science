#include <stdio.h>

//              n-2 n-1 n n+1
// sequência: 0, 1, 1,  2, 3, 5, 8, 13
// fib(1) = 0;
// fib(2) = 1;
// fib(3) = fib(1) + fib(2) = 1
// Na recursão, você utiliza o próprio problema em uma versão mais simples.
// fib(n) = fib(n-2) + fib(n-1)


int fib (int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n >  2) return fib(n-2) + fib(n-1);
}


int main (void) {
    int n, i;
    printf("Entre com um n, onde n >= 0: ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ",fib(i));
    }
    printf("\n");
    return 0;
}
