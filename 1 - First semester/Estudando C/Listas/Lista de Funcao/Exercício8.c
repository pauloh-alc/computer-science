#include <stdio.h>
#define TAM 10

int i, j;

void show (int vetor[], int x)
{
	
	for (i = 0; i < x; i++) {
		printf("%d ",i);
		for (j = 0; j < vetor[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	// Dicionário de dados:
	int n;
	int v[TAM];
	
	// Entrada de dados:
	printf("Preencha o vetor v: \n\n");
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ", i);
		scanf("%d",&v[i]);
	}
	
	while (1) {
		
		printf("\nEntre com um numero 'n' < %d: ",TAM);
		scanf("%d",&n);
		
	if (n < TAM) break;
	}
	
	// Chamada da função
	show (v, n);
}
