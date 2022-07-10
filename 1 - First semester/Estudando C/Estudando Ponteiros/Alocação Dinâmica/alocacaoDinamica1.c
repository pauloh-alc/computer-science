#include <stdio.h>
#include <stdlib.h>
// Alocação dinâmica de memória.

// utilizando função: malloc e free
				
	// parâmetros   ponteiro   tipo básico  
	void escreve (int *numeros, int n)
	{
		int i;
		
		printf("\nNumeros lidos: ");
		for (i = 0; i < n; i++) {
			printf("%d, ",*(numeros + i));
		}
		printf("\n");
	}
int main ()
{
	int *numeros;
	int n, i;
	
	printf("Entre com a quantidade de numeros: ");
	scanf("%d",&n);
	
	 // alocando quantidade de memória que o usuário precisa usar:
	 
	numeros = (int *) malloc(n * sizeof(int));   // o ponteiro 'numeros' agora vai agir como um vetor. 
	                 
	if (numeros == NULL) {
		printf("Erro: malloc nao alocou memoria !! \n"); // Em caso de erro de alocação
		exit(1);
	}
	
	// Entrada de dados:
	for (i = 0; i < n; i++) {
		printf("Numero %d: ",i);
		scanf("%d",&numeros[i]);
	}
	
	// Chamada da função. Argumentos passados são: numeros, que é um ponteiro e n, que é uma variável int do tipo básico.
	escreve (numeros, n);
	
	free(numeros); // Desalocando memória.
	
	return 0;
}
