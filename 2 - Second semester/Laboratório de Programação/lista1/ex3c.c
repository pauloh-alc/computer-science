#include <stdio.h>

int primo (int n)
{   
    int i, div = 0;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            div += 1;
        }
    }

    if (div == 2) return n;
    else          return 0;
}

int main (void) {
    int x, y, i, soma_p = 0, valor;
    
    do {
        printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
        scanf("%d %d",&x,&y);
    } while (x >= y);

    for (i = x; i <= y; i++) {
        valor = primo(i);
        soma_p += valor;
    }

    printf("A soma dos número primos no intervalo [%d, %d] é: %d\n",x, y, soma_p);
    return 0;
}
