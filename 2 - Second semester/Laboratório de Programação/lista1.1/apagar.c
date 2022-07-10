#include <stdio.h>

int main (void) {
    
    int n,i;

    printf("Entre com um numero n: ");
    scanf("%d",&n);
    
    for (i = 2; i < n; i++) {
        if (n % i == 0) break;
    }
    if (i == n) printf("%d é primo", n);
    else        printf("%d não é primo", n);

    return 0;
}
