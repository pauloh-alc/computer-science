#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(){
	// Dicionário de dados:
	int v[SIZE];
	int i, menor, posicao;
	
	// Gerando vetor com elementos pseudoaleatórios no intervalo [0-15[
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) {
		v[i] = rand() % 15;
	}
	
	printf("v gerado: ");
	for (i = 0; i < SIZE; i++) {
		printf("[%d]",v[i]);
	}
	
	// Processamento: 
	// trecho responsável por colocar o menor elemento encontrado durante
	// a varredura do vetor v[0..SIZE-1] na posicao v[0] e vice - versa.
	menor = v[0];
	posicao = 0;
	for (i = 1; i < SIZE; i++) {
		if (v[i] < menor) {
			menor = v[i];
			posicao = i;
		}
	}
	v[posicao] = v[0]; 
	v[0] = menor;
	
	// Saída de dados:
	printf("\nv novo  : ");
	for (i = 0; i < SIZE; i++) {
		printf("[%d]",v[i]);
	}
	
return 0;
}
