// Alocação dinâmica de memória com a utilização de ponteiros.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50
	void entradaDados (char **cidades, int i)
	{
		int comprimento;
		char nome[TAM];
		printf("Entre com o nome da cidade %d: ",i);
		fflush(stdin);
		scanf("%[^\n]s",nome);
		
		comprimento = strlen(nome) + 1;
		cidades[i] = (char*) malloc (comprimento * sizeof(char));
		strcpy(cidades[i],nome);
	}
	
	void exibir (char **cidades, int n)
	{
		int i;
		for (i = 0; i < n; i++){
			printf("Cidade[%d]: %s \n",i,cidades[i]);
		}
	}
int main ()
{
	char **cidades; // Ponteiros de ponteiros
	int n, i;
	
	printf("Entre com a quantidade de cidades que voce deseja inserir: ");
	scanf("%d",&n);
	
	cidades = malloc (n * sizeof(char*));
	
	if (cidades == NULL) {
		printf("Erro: malloc() nao alocou memoria !! \n");
		exit(1);
	}
	else {
		printf("malloc() alocou memoria com sucesso. \n");
		for (i = 0; i < n; i++) {
			entradaDados (cidades, i);
		}
		exibir (cidades, n);
		
		for (i = 0; i < n; i++) {
			free(cidades[i]);
		}
		free(cidades);
	}
	return 0;
}
