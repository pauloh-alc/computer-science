#include <stdio.h>
#include <stdlib.h>
void main ()
{
	
	int n,i;
	// Este ponteiro vai deter o endereço base
	// do bloco de bytes criados.
	int *vet;
	
	printf("Quantos valores: ");
	scanf("%d",&n);
	
	vet = (int *) malloc (n * sizeof(int)); // retorna sempre ponteiro void *
//  vet = [ESPAÇO EM BYTES ALOCADOS]

	// Check if the memory has been successfully
	// allocated by malloc or not
	
	if(vet == NULL) {
		printf("Memory not allocated !! \n");
		exit(0);
	}
	else {
		printf("Memory allocated.\n");
	}
	//leitura
	for (i = 0; i < n; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",(vet+i));
	}
	
	//escrita
	printf("vet = ");
	for (i = 0; i < n; i++) {
		printf("%d, ",vet[i]);
	}
	printf("\n");
	
	// Desalocando memória
	free(vet);
}
