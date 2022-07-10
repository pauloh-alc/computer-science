#include <stdio.h>

int qtd_digitos (int n, int d)
{   
    int resto, qtd = 0;
    
    if (n == 0 && d == 0) return 1;
        
    while (n != 0) {
        resto = n % 10;
        n = n / 10;
        if (resto == d) qtd++;
    }
    return qtd;
}


int main (void) {
    int n, d, quantidade;

    printf("Entre com um número inteiro n: ");
    scanf("%d",&n);

    do {
    printf("Entre com um número d E [0-9]: ");
    scanf("%d",&d);
    } while (d < 0 || d > 9);
    
    quantidade = qtd_digitos (n, d);
    printf("O número %d tem %d digitos %d \n", n, quantidade, d);

    return 0;
}
