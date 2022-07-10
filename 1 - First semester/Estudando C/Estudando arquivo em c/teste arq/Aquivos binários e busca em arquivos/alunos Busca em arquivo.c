#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_ARQUIVO_TXT "alunos.txt"
#define NOME_ARQUIVO_BIN "alunos.data"

typedef struct{
	char nome[30];
	int idade;
	char endereco[70];
} Aluno;
	// Procedimento: exibição de menu
	void menu () 
	{
		puts("[1] CADASTRAR ALUNO.");
		puts("[2] LISTAR ALUNOS.");
		puts("[3] BUSCAR POR ALUNO");
		puts("[0] SAIR");
	}
	// Procedimento: cadastrar alunos
	void cadastro (FILE* arquivo, Aluno estudante[], int *n)
	{
		int i;
		// Abrindo arquivo binário para escrita.
		arquivo = fopen (NOME_ARQUIVO_BIN, "wb");
		
		if (arquivo == NULL) {
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		}
	
		for (i = 0; i < *n; i++) {
			fflush(stdin);
			printf("Nome %d: ",i);
			scanf("%[^\n]s",estudante[i].nome);
			
			fflush(stdin);
			printf("Idade %d: ",i);
			scanf("%d",&estudante[i].idade);
			
			fflush(stdin);
			printf("Endereco %d: ",i);
			scanf("%[^\n]s",estudante[i].endereco);
			puts("");
		}
		// Escrevendo em arquivo binário:
		fwrite(&estudante, sizeof(Aluno), *n, arquivo);
		fclose(arquivo);
		
		// Abrindo arquivo binário para leitura
		arquivo = fopen (NOME_ARQUIVO_BIN, "rb");
		if (arquivo == NULL){
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		}
		fread(&estudante, sizeof(Aluno),*n, arquivo);
		fclose(arquivo);
		
		// Abrindo arquivo.txt para escrita.
		arquivo = fopen (NOME_ARQUIVO_TXT, "w");
		if (arquivo == NULL) {
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		}
		for (i = 0; i < *n; i++) {
			fprintf(arquivo,"%s\n%d\n%s\n",estudante[i].nome,
									       estudante[i].idade,
										   estudante[i].endereco);
		}
		fclose(arquivo);
	}
	
	// Procedimento: lista todos os alunos cadastrados
	void listar (FILE* arquivo, Aluno *estudante, int *n) 
	{
		int i;
		
		arquivo = fopen (NOME_ARQUIVO_TXT, "r");
		if (arquivo == NULL) {
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		} 
		
		for (i = 0; i < *n; i++) {
			printf("%s\n%d\n%s\n",estudante[i].nome,
								  estudante[i].idade,
								  estudante[i].endereco);
		}
		
		fclose(arquivo);
	}
	
	// Procedimento: realiza busca de aluno.
	void buscar (FILE* arquivo, Aluno* estudante, int *n)
	{
		char b_nome[30];
		int i;
		
		fflush(stdin);
		printf("Buscar aluno por nome: ");
		scanf("%[^\n]s",b_nome);
		
		// Abrindo o arquivo binário para leitura.
		arquivo = fopen (NOME_ARQUIVO_BIN, "rb");
		if (arquivo == NULL) {
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		}
		// Realizando leitura de arquivo binário 
		fread(&estudante, sizeof(Aluno), *n, arquivo);
		
		for(i = 0; i < *n; i++) {
			if(strcmp(estudante[i].nome, b_nome) == 0){
					printf("%s\n%d\n%s\n",estudante[i].nome,
									      estudante[i].idade,
									      estudante[i].endereco);
			}		
		}
		fclose(arquivo);	
	}
	
int main () 
{
	FILE* arquivo;
	Aluno *estudante;
	int n = 0;
	int opcao;
	
	// Alocação dinâmica de memória
	printf("Entre com uma quantidade 'n' de estudantes: ");
	scanf("%d",&n);
	estudante = (Aluno*) malloc (n * sizeof(Aluno));
	
	while (1) {
		menu ();
		printf("Entre com uma opcao: ");
		scanf("%d",&opcao);
		if (!opcao) break;
		
		switch (opcao) {
			case 1:{
				cadastro (arquivo, estudante, &n);
				break;
			}
			case 2:{
				listar (arquivo, estudante, &n);
				break;
			}
			case 3:{
				buscar (arquivo, estudante, &n);
				break;
			}
			default:
				printf("Erro: voce precisa informar valores validos !!\n");
			break;
		}
	}
	return 0;
}
