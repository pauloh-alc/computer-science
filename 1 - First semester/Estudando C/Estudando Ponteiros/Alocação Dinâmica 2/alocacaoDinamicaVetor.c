#include <stdio.h>
#include <stdlib.h>
	void exibicao (int *ponteiro, int n)
	{
		int i;
		// Exibe os elementos do vetor.
		printf("Os elementos do vetor sao: ");
		for (i = 0; i < n; i++) {
			printf("%d, ",*(ponteiro+i));
		}
	}
int main ()
{
	// Este ponteiro vai deter a base do 
	// endereço de um bloco criado.
	int* ptr;
	int n, i;
	
	// Obtém o número de elementos do vetor.
	
	printf("Entre com o numero de elementos 'n': ");
	scanf("%d",&n);
	
	// Usando malloc() para alocar memória de forma dinâmica.
	ptr = (int*) malloc (n * sizeof(int));
	
	// Checa se malloc alocou memória ou não com sucesso.
	if (ptr == NULL) {
		printf("Erro: memoria nao alocada !!");
		exit(1);
	}
	else {
		// Memória foi alocada com sucesso.
		printf("Memoria alocada com sucesso usando malloc(). \n");
		
		// Obtém elementos do vetor
		for (i = 0; i < n; i++) {
			*(ptr+i) = i + 1;
		}
		// Chamada de função:
		exibicao (ptr, n);
		// Desalocando memória
		free(ptr);
	}
	return 0;
}
