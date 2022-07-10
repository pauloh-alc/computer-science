#include <stdio.h>
#include <stdlib.h>

#define TAM 3
#define NOME_ARQUIVO "arquivoBin.data"

typedef struct{
	char nome[30];
	int  idade;
	int  peso;		
} Pessoa;
	
	void cadastro (FILE* arquivo, Pessoa humano[])
	{
		int i;
		
		arquivo = fopen (NOME_ARQUIVO, "wb");
		if (arquivo == NULL ) {
			printf("Erro na abertura do arquivo para escrita !!\n");
			exit(1);
		}
		
		for (i = 0; i < TAM; i++) {
			fflush(stdin);
			printf("Nome: ");
			scanf("%[^\n]s",humano[i].nome);
			printf("Idade: ");
			scanf("%d",&humano[i].idade);
			printf("Peso: ");
			scanf("%d",&humano[i].peso);
		}
		fwrite(&humano, sizeof(Pessoa), TAM, arquivo);
	
	fclose(arquivo);
	}
	
	void exibe (FILE* arquivo, Pessoa humano[])
	{
		int i;
		
		arquivo = fopen (NOME_ARQUIVO, "rb");
		if (arquivo == NULL ) {
			printf("Erro na abertura do arquivo para leitura !!\n");
			exit(1);
		}
		fread(&humano, sizeof(Pessoa), TAM, arquivo);
		
		for(i = 0; i < TAM; i++) {
			printf("Nome: %s, idade: %d, peso: %d. \n",humano[i].nome, humano[i].idade, humano[i].peso);
		}
		
		fclose(arquivo);
	}
int main ()
{
	FILE *arquivo;
	Pessoa humano[TAM];
	
	//cadastro (arquivo, humano);
	exibe (arquivo, humano);
	return 0;
}
