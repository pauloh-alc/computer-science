// Questão 4:
#include <stdio.h>
#include <stdlib.h>

void maior_menor (int vetor[], int n)
{   
    int maior, menor;

    menor = vetor[0];
    maior = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] < menor) menor = vetor[i];
        if (vetor[i] > maior) maior = vetor[i];    
    }
    printf("%d é maior número no vetor. \n", maior);
    printf("%d é o menor número no vetor. \n", menor);
}

int main (void) {
    int* v, n;

    printf("Entre com um número 'n': ");
    scanf("%d",&n);

    v = (int*) malloc (sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d",v + i);
    }

    maior_menor (v, n);

    return 0;
}
