// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Questão 3:

#include <stdio.h>
#include <string.h>

// Estruturas:
typedef struct {
	int codigo;
	char nome[30];
	char genero[30];
	int duracaoM;
	int duracaoS;
}Filmes;

typedef struct{
	char nomeA[30];
	int codigoAtor;
	Filmes filmeAtor;
} Ator;
	
	// Procedimento: menu de exibição
	void menu ()
	{
		printf("\n");
		puts("[1]. Cadastrar Filmes. ");
		puts("[2]. Cadastrar Ator. ");
		puts("[3]. Mostrar Filmes. ");
		puts("[4]. Mostrar Atores. ");
		puts("[5]. Filmes de um ator. ");
		
	}
	
	// Procedimento: cadastro de filmes
	void cadastrarFilmes (Filmes filme[], int *i)
	{
		fflush(stdin);
		printf("Codigo: ");
		scanf("%d",&filme[*i].codigo);
		fflush(stdin);
		printf("Nome: ");
		scanf("%[^\n]s",filme[*i].nome);
		fflush(stdin);
		printf("Genero: ");
		scanf("%[^\n]s",filme[*i].genero);
		fflush(stdin);
		printf("Duracao no formato (MM:SS): ");
		scanf("%d:%d",&filme[*i].duracaoM,&filme[*i].duracaoS);
	(*i)++;
	}
	
	// Procedimento: cadastro de ator
	void cadastrarAtor (Ator ator[], int *j)
	{
		fflush(stdin);
		printf("Nome: ");
		scanf("%[^\n]s",ator[*j].nomeA);
		fflush(stdin);
		printf("Codigo do ator: ");
		scanf("%d",&ator[*j].codigoAtor);
		fflush(stdin);
		(*j)++;
	}
	
	// Procedimento: exibe filmes
	void mostrarFilmes (Filmes filme[], int i)
	{
		int k;
		
		printf("\n");
		for (k = 0; k < i; k++) {
			printf("Nome: %s (codigo: %d, genero: %s, duracao: %d:%d). \n",filme[k].nome, filme[k].codigo,
																		   filme[k].genero, filme[k].duracaoM,
																		   filme[k].duracaoS);
		}
	}
	
	// Procedimento: exibe atores
	void mostrarAtor (Ator ator[], int j)
	{
		int k;
		printf("\n");
		for (k = 0; k < j; k++) {
			printf("Codigo do ator: %d \n", ator[k].codigoAtor);
			printf("Nome: %s \n",ator[k].nomeA);
		}
	}
	
	// Procedimento: busca ator
	void filmesAtor (Ator ator[], int j)
	{
		int k;
		char b_nome[30];
		
		fflush(stdin);
		printf("Entre com o nome de um determinado ator: ");
		scanf("%[^\n]s",b_nome);
		
		for (k = 0; k < j; k++) {
			if (strcmp(ator[k].nomeA, b_nome) == 0) {
				printf("Nome: %s \n",ator[k].nomeA);
				break;
			}
		}	
	}
	
// Função principal:
int main ()
{
	// Dicionário de dados:
	Filmes filme[100];
	Ator ator[100];
	int opcao, i = 0, j = 0;
	
	while (1) {
		menu ();
		printf("Entre com a opcao desejada: ");
		scanf("%d",&opcao);
		
		// Realizando chamada das funções
		switch (opcao) {
			case 1: {
				cadastrarFilmes (filme, &i);
				break;
			}
			case 2: {
				cadastrarAtor (ator, &j);
				break;
			}
			case 3: {
				mostrarFilmes (filme, i);
				break;
			}
			case 4:{
				mostrarAtor (ator, j);
				break;
			}
			case 5:{
				filmesAtor (ator, j);
				break;
			}
		}
	}
	
	return 0;
}
