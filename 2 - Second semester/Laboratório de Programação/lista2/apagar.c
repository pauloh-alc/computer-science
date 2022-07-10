#include <stdio.h>


void fib (long int n) 
{   
    if (n >= 1) printf("0 ");
    if (n >= 2) printf("1 ");
    
    int i, f = 1, a = 1;

    for (i = 1; i <= n - 2; i++) {
        printf("%d ", f);
        f = f + a;
        a = f - a;
    } 
}

int main (void) {
    
    long int n;

    printf("Entre com um valor para n, onde n >= 0: ");
    scanf("%ld",&n);

    fib(n);

    return 0;
}
