// Questão 1:
#include <stdio.h>

int main (void) {
    
    int n, i, soma = 0;
    float numero, m;

    printf("Entre com um número 'n': ");
    scanf("%d",&n);

    for (i = 0; i < n; i++) {
        printf("Número %d: ",i);
        scanf("%f",&numero);
        soma = soma + numero;
    }
    
    m = (float) soma / n;
    printf("A media dos %d números recebidos é: %.2f \n",n, m);

    return 0;
}
