// Exercício 4) - resolução
#include <stdio.h>

int main (void) {
    int n, i, c, a = 2, b = 3, numero, div;

    printf("Entre com um número 'n': ");
    scanf("%d",&n);
    
    c = 0;
    numero = 1;
    while (c < n) {
        
        div = 0;
        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) div += 1;
        }

        if (div == 2) { 
            
            if (b - a == 2) {
                printf("(%d, %d) são primos gêmios\n", a, b);
                c += 1;    
            }

            a = b;
            b = numero;
        }
   
    numero += 1;    
    }

    return 0;
} 
