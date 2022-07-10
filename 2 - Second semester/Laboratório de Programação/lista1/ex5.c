// Exercício 5) - resolução
#include <stdio.h>

int main (void) {
    int n, i;
    float H;

    do {
        printf("Entre com um número n, onde n > 0: ");
        scanf("%d",&n);
    } while (n <= 0);
    
    H = 0;
    for (i = 1; i <= n; i++) {
        H = H + 1.0 / i;
    }

    printf("H(%d) = %f \n",n, H);

    return 0;
}
