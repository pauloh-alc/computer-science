#include <stdio.h>
#include <stdlib.h>
	void show (int vetor[], int n)
	{
		int i, j;
		
		for (i = 0; i < n; i++) {
			printf("%d ",i);
			for (j = 0; j < vetor[i]; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
int main () 
{
	int qtd, i, n;
	int* v;
	
	printf("Entre com um quantidade de elementos para o vetor: ");
	scanf("%d",&qtd);
	
	// Alocação de memória:
	v = (int *) malloc (qtd * sizeof(int));
	
	if (v == NULL) {
		printf("Erro: aconteceu erro na alocacao de memoria !!\n");
		exit(1);
	}
	else {
		printf("Malloc alocou memoria com sucesso !! \n");
	}
	
	for (i = 0; i < qtd; i++) {
		printf("Posicao %d = ",i);
		scanf("%d",&v[i]);
	}
	
	printf("Entre com um numero 'n' de elementos: ");
	scanf("%d",&n);
	show (v, n);
	
	return 0;
}
