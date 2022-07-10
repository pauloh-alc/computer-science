#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
	char sexo; // M ou F.
} Pessoa;

	void cadastro (FILE* bin, Pessoa humano, char nomeArquivo[], int *n)
	{
		int enter;
		
		bin = fopen (nomeArquivo, "wb");
		if (bin == NULL) {
			printf("Erro na abertura do arquivo !! \n");
			exit(1);
		}
		
		*n = 0;
		while (1) {
			fflush(stdin);
			printf("Nome %d: ",*n);
			enter = scanf("%[^\n]s",humano.nome);
			if (enter == 0) break;
			printf("Idade %d: ",*n);
			fflush(stdin);
			scanf("%d",&humano.idade);
			fflush(stdin);
			printf("Sexo %d (M ou F): ",*n);
			scanf("%c",&humano.sexo);
			(*n)++;
			fwrite (&humano, sizeof(Pessoa), 1, bin);
		}
		fclose(bin);
	}
	
	void listar (FILE *bin, Pessoa humano, char nomeArquivo[], int n)
	{
		int i;
		
		bin = fopen (nomeArquivo, "rb");
		if (bin == NULL) {
			printf("Erro na abertura do arquivo !! \n");
			exit(1);
		}
		fread(&humano, sizeof(Pessoa), n, bin);
		for (i = 0; i < n; i++) {
			printf("Nome: %s (idade: %d, sexo %c)\n",humano.nome, humano.idade, humano.sexo);
		}

		fclose(bin);
	}
int main ()
{
	FILE *bin;
	Pessoa humano;
	int n = 0;
	char nomeArquivo[30];
	
	printf("Nome do arquivo binario: ");
	scanf("%[^\n]s",nomeArquivo);
	
	while (1) {
		switch (opcao) {
			
		}
	if(!opcao) break;
	}
	
	cadastro (bin, humano, nomeArquivo, &n);
	listar   (bin, humano, nomeArquivo, n);
	
	return 0;
}
