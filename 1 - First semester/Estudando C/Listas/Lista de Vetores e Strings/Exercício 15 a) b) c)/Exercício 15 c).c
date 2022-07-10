#include <stdio.h>
#define TAM 10
int main () {
	
	// Dicionário de dados:
	int vet1[TAM], vet2[TAM], diferenca[TAM], resultado[TAM];
	int i, j, n, existe, tamanho;
	
	// Entrada de dados:
	printf("Vetor 1: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&vet1[i]);
	}
	printf("\nVetor 2: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&vet2[i]);
	}
	
	// Processamento: realizando a diferença.
	n = 0;
	for (i = 0; i < TAM; i++) {
		existe = 0;
		for (j = 0; j < TAM; j++) {
			if (vet1[i] == vet2[j]) {
				existe = 1;
				break;
			}
		}
		if (existe != 1) {
			diferenca[n] = vet1[i];
			n++;
		}
	}
	printf("\n");
	
	// Removendo elemento repetidos caso o usuário tivesse repetido o mesmo elemento em um dos vetores:
	tamanho = 1;
	resultado[0] = diferenca[0];
	for (i = 0; i < n; i++) {
		for (j = 0; j < tamanho; j++) {
			if (diferenca[i] == resultado[j]) {
				existe = 1;
				break;
			}
			else {
				existe = 0;
			}
		}
		if (existe == 0) {
			resultado[tamanho] = diferenca[i];
			tamanho++;
		}
	}
	
	// 	Saída de dados: imprimindo a diferença:
	for (i = 0; i < tamanho; i++) {
	 printf("[%d]",resultado[i]);
	}
	
	return 0;
}
