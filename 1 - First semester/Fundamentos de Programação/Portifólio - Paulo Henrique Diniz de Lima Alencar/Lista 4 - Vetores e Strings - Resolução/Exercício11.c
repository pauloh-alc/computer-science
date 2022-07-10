#include <stdio.h>
#define TAM 20
int main(){
	// Dicionário de dados:
	int v[TAM];
	int i, j, menor, menorPos;
	
	// Entrada de dados:
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&v[i]);
	}
	//Processamento:
	// Trecho responsável por deixar o vetor em ordem crescente
	for (i = 0; i < TAM - 1; i++) {
		menor = v[i];
		menorPos = i;
		for (j = i; j < TAM; j++) {
			if (v[j] < menor) {
				menor = v[j];
				menorPos = j;
			}
		}
		v[menorPos] = v[i];
		v[i] = menor;
	}
	// Saída de dados:
	printf("\n Vetor ordenado:");
	for (i = 0; i < TAM; i++) {
		printf("[%d]",v[i]);
	}
return 0;
}
