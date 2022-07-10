#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void insereNome(char* palavras[], int pos) 
	{
		char aux[100];
		int tam;
		
		printf("Digite a string %d: ",pos);
		fflush(stdin);
		scanf("%[^\n]s",aux);
		tam = strlen(aux) + 1;
		
		palavras[pos] = malloc(tam*sizeof(char)); // alocando memória
		
		// str: string, cpy: copy
		//strcpy(destino,origem)
		strcpy(palavras[pos], aux); // transferindo conteúdo de aux, para o vetor palavra[0..4], lembrando que antes ele era um ponteiro,
	}
int main ()
{
	char* nomes[5]; // vetor de ponteiros.
	int i;
	
	//leitura
	for (i = 0; i < 5; i++) {
		insereNome (nomes, i); // chamada da função
	}
	//escrita
	for (i = 0; i < 5; i++) {
		printf("nomes[%d] = %s \n", i, nomes[i]);
	}
	
	//desalocando memória 
	for (i = 0; i < 5; i++) {
		free(nomes[i]); // desalocando memória para cada posição que o vetor nomes[0..4] aponta.
	}
	
	return 0;
}
