#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOME_ARQUIVO "comidinhas.txt"

// Estrutura do tipo Comida, com atributos nome, qtd e cor.
typedef struct {
	char nome[30];
	int qtd;
	char cor[30];
} Comida;

	void menu ()
	{
		printf("\n");
		puts("Comidinhas da Luara: ");
		puts("[0]. Sair.");
		puts("[1]. Cadastrar comidinha.");
		puts("[2]. Listar comidinhas.");
		puts("[3]. Buscar por comidinha.");
	}
	
	void cadastrar (FILE *arquivo, Comida comidinhas[], int *n)
	{
		arquivo = fopen (NOME_ARQUIVO, "a+");
		if (arquivo == NULL) {
			printf("Erro: erro na abertura do arquivo !! \n");
			exit(1);
		}
		printf("Ola Luara !! \n");
		
		// Entrada de dados:
		fflush(stdin);
		printf("Entre com o nome da comidinha: ");
		scanf("%[^\n]s",comidinhas[*n].nome);
		
		fflush(stdin);
		printf("Entre com a quantidade dessa comidinha Luara: ");
		scanf("%d",&comidinhas[*n].qtd);
		
		fflush(stdin);
		printf("Entre com a cor da comindinha: ");
		scanf("%[^\n]s",comidinhas[*n].cor);
		printf("\n");
		
		// Escrevendo no arquivo:
		fprintf(arquivo,"Nome da comidinha %d: %s (quantidade: %d, cor: %s)\n",*n,
																				comidinhas[*n].nome,
																				comidinhas[*n].qtd,
																				comidinhas[*n].cor);
		fclose(arquivo);
		(*n)++;
	}
	
	void listar (FILE* arquivo, Comida comidinhas[])
	{
		int i;
		char aux[100];
		
		arquivo = fopen (NOME_ARQUIVO, "r");
		if (arquivo == NULL) {
			printf("Erro: erro na abertura do arquivo !! \n");
			exit(1);
		}
		
		i = 0;
		while (1) {
			if (feof(arquivo)) {
				break;
			}
			char *p = fgets(aux, 100, arquivo);
			if (p != NULL) printf("%s",aux);
		}	
		fclose(arquivo);
	}
	
	void buscar (FILE* arquivo, Comida comidinhas[])
	{
		char b_nome[30];
		char aux[100];
		int i, j, inicial;
		
		arquivo = fopen (NOME_ARQUIVO, "r");
		if (arquivo == NULL) {
			printf("Erro: erro na abertura do arquivo !! \n");
			exit(1);
		}
		
		fflush(stdin);
		printf("Entre com o nome da comida que voce deseja buscar: ");
		scanf("%[^\n]s",b_nome);
		
		int existe = 0;
		while (1) {
			if (feof (arquivo)) {
				break;
			}
			char *p = fgets(aux, 100, arquivo);
			i = 0;
			while (aux[i] != '\n') {
				if (b_nome[0] == aux[i]) {
					inicial = i;
					j = 0;
					while (b_nome[j] == aux[inicial] && inicial >= 21 && inicial <= 35) {
						inicial++;
						j++;
					}
					if (j == strlen(b_nome) && p != NULL) {
						 printf("%s",aux);
						 existe = 1;
					}
				}
			i++;
			}
		}
		if (existe == 0) printf("Comidinha nao encontrada !!\n");
	}
int main ()
{
	FILE* arquivo;
	Comida comidinhas[30];
	int opcao, i = 0;
	
	while (1) {
		menu ();
		printf("Entre com um opcao Luara: ");
		scanf("%d",&opcao);
		printf("\n");
		
		if (!opcao) break;
		switch (opcao) {
			case 1:{
				cadastrar (arquivo, comidinhas, &i);
				break;
			}
			case 2:{
				listar (arquivo, comidinhas);
				break;
			}
			case 3:{
				buscar (arquivo, comidinhas);
				break;
			}
		}
	}
	return 0;
}
