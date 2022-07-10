#include <stdio.h>
#define TAM 10

int main(){
	// Dicionário de dados:
	int vetor[TAM],vetorNovo[TAM];
	int i;
	
	// Entrada de dados:
	printf("Entre com os elementos do vetor: \n");
	for(i = 0; i < TAM; i++){
		printf("[] = ");
		scanf("%d",&vetor[i]);
	}
	
	// Processamento:
	for(i = 0; i < TAM; i++){
		if(vetor[i] < 0) vetorNovo[i] = 0;
		else			 vetorNovo[i] = vetor[i];
	}
	
	// Saída de dados:
	printf("Vetor raiz: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetor[i]);
	}
	
	printf("\n");
	
	printf("Vetor novo: ");
	for(i = 0; i < TAM; i++){
		printf("[%d]",vetorNovo[i]);
	}
return 0;
}
