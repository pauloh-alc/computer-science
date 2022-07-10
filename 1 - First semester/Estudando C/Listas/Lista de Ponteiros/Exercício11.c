#include <stdio.h>
#define TAM 50
int i;
	// Função: armazena nas variáveis min e max passadas por referência
	// o valor mínimo e váximo do vetor v[0..n].
	void limites (int vet[], int n, int *min, int *max)
	{
		*max = vet[0];
		*min = vet[0];
		for (i = 0; i < n; i++) {
			if (vet[i] > *max) *max = vet[i];
			if (vet[i] < *min) *min = vet[i];
		}
	}
int main ()
{
	// Dicionário de dados:
	int vet[TAM];
	int n;
	int min, max; 
	
	// Leitura de dados:
	printf("Entre com um numero 'n' de elementos que voce deseja ler: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",&vet[i]);	
	}
	
	// Saída de dados:
	limites (vet, n, &min, &max);
	printf("max = %d, min = %d \n",max,min);
	
	return 0;
}
