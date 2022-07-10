// Algoritmo remove elementos repetidos de um vetor, deixando apenas uma ocorrência.
#include <stdio.h>
#define TAM 7
int main(){
	// Dicionário de dados:
	int i, j;
	int v[TAM], x[TAM];
	int repetido, tamanho;
	
	// Entrada de dados:
	for (i = 0; i < TAM; i++) {
		printf("[] = ");
		scanf("%d",&v[i]);
	}
	
	// Exibindo vetor original
	printf("vetor original: ");
	for (i = 0; i < TAM; i++) {
		printf("[%d]",v[i]);
	}
	
	// Processamento:
	tamanho = 1;
	for (i = 0; i < TAM; i++) {
		if (i == 0) x[i] = v[i];
		for (j = 0; j < tamanho; j++) {
			if (v[i] == x[j]) {
				repetido = 1;
				break;
			}
			else {
				repetido = 0;
			}
		}
		if (repetido == 0) {
			x[tamanho] = v[i];
			tamanho += 1;
		}
	}
	
	// Exibindo vetor sem repetição
	printf("\nx: ");
	for (i = 0; i < tamanho; i++) {
		printf("[%d]",x[i]);
	}
return 0;
}
