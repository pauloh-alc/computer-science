#include <stdio.h>

int fat (int n)
{
    if (n == 0) return 1;

    return n * fat(n-1);
}


int main (void) {
    int n, m;
    float combinacao;
    
    do {
        printf("Entre com o valor de n e m respectivamente, onde n,m > 0 e n >= m: ");
        scanf("%d %d",&n,&m);
    } while (n < 0 || m < 0 || m > n);

    combinacao = fat(n) / (fat(m) * fat(n - m));
    
    printf("combinacao = %.3f \n", combinacao);
    return 0;
}
