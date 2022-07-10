#include <stdio.h>

int numero_de_digitos (int n)
{   
    int i = 0, d = n;
    
    if (n == 0) return 1;

    while (d > 0) {
        d = d / 10;
        i += 1;
    }

    return i;
}

int main (void) {
    int n, qtd_digitos;

    printf("Entre com um inteiro n: ");
    scanf("%d",&n);

    qtd_digitos = numero_de_digitos (n);
    printf("\nO número %d possui %d digitos\n", n, qtd_digitos);
}
