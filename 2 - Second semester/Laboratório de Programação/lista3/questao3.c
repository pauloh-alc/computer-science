// Questão 3:
#include <stdio.h>
#include <math.h>
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
    float vetor[TAM], m, desvio, soma = 0;

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
    
    desvio = sqrt(soma / n); 
    printf("O desvio padrão é: %.2f \n", desvio);
    
    return 0;
}
