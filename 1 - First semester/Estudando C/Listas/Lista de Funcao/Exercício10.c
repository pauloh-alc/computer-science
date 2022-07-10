#include <stdio.h>
#define TAM 9

int i;

int split (int v1[], int v2[]) 
{
	int k;
	
	k = 0;
	for (i = 0; i < TAM; i++) {
		if (v1[i] < v1[0]) {
			v2[k] = v1[i];
			k += 1;
		}	
	}
	
	v2[k] = v1[0];
	k += 1;
	
	for (i = 0; i < TAM; i++) {
		if (v1[i] > v1[0]) {
			v2[k] = v1[i];
			k += 1;
		}
	}

}
int main () 
{
	// Dicionário de dados:
	int vetor[TAM], novoVetor[TAM];
	
	// Entrada de dados:
	printf("Entre com um vetor abaixo: \n");
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ", i);
		scanf("%d",&vetor[i]);
	}
	
	// Chamada da função com argumentos necessários
	split (vetor, novoVetor);
	
	// Exibindo vetor modificado.
	for (i = 0; i < TAM; i++) {
		printf("[%d]",novoVetor[i]);
	}
	return 0;
}
