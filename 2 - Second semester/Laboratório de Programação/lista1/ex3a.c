// Exercício 3 a) - Resolução
#include <stdio.h>

int par (int i)
{
    if (i % 2 == 0) return i;
    else            return 0;
}

int main (void) {
    
    int x, y, i, soma = 0, valor;

    do {
        printf("Entre com um número 'x' e 'y' respectivamente, onde (x < y): ");
        scanf("%d %d",&x,&y);
    } while (x >= y);

    for (i = x; i <= y; i++) {
        valor = par (i);
        soma += valor; 
    }

    printf("Soma dos números Pares no intervalor [%d, %d] é: %d\n", x, y, soma);

    return 0;
}
