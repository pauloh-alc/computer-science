// Questão 2
#include <stdio.h>
#define TAM 30

float potencia (float base, int expoente) 
{
    float pot = 1;

    for (int i = 0; i < expoente; i++) {
        pot = pot * base;    
    }

    return pot;
}

int main (void) {
    
    int n, i;
    float vetor[TAM], m, v, soma = 0;

    printf("Entre com um número 'n': ");
    scanf("%d",&n);
    
    for (i = 0; i < n; i++) {
        printf("Número %d: ", i);
        scanf("%f",&vetor[i]);
        soma = soma + vetor[i];
    }
    m = (float) soma / n;
    
    
    soma = 0; 
    for (i = 0; i < n; i++) {
        soma = soma + potencia((vetor[i] - m), 2);
    }   
    v = (float) soma / n;

    printf("A variáncia é: %.2f \n", v);
    return 0;
}
