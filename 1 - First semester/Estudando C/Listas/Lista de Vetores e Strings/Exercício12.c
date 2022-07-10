#include <stdio.h>
#define TAM 9
int main(){
	// Dicionário de dados:
	int v[TAM], vNovo[TAM];
	int i, n;
	
	// Entrada de dados:
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&v[i]);
	}
	
	// Processamento:
	n = 0;
	for (i = 1; i < TAM; i++) {
		if (v[i] <= v[0]) {
			vNovo[n] = v[i];
			n++;
		}
	}
	
	vNovo[n] = v[0];
	n = n + 1;
	
	for (i = 1; i < TAM; i++){
		if (v[i] > v[0]) {
			vNovo[n] = v[i];
			n++;
		}
	}
	
	// Saída de dados:
	printf("\nVetor raiz:");
	for (i = 0; i < TAM; i++) {
		printf("[%d]",v[i]);
	}
	printf("\nVetor novo:");
	for (i = 0; i < TAM; i++) {
		printf("[%d]",vNovo[i]);
	}
return 0;
}
