#include <stdio.h>
#include <string.h>

#define TAM 3

int i;

typedef struct {
	char titulo[50];
	char autor[50];
	int ano;
} Livros;

	void entradaDados (Livros livros[])
	{
		for (i = 0; i < TAM; i++) {
			fflush(stdin);
			printf("Titulo do Livro: ");
			scanf("%[^\n]s",livros[i].titulo);
			fflush(stdin);
			printf("Nome do autor: ");
			scanf("%[^\n]s",livros[i].autor);
			printf("Ano: ");
			fflush(stdin);
			scanf("%d",&livros[i].ano);
			printf("\n");
		}
	}
		
	void menuBusca ()
	{
		puts("[0] SAIR.");
		puts("[1] Buscar por titulo da obra.");
		puts("[2] Buscar por autor.");
		puts("[3] Buscar por ano.");
	}
	
	void buscarPorTitulo (Livros livros[]) 
	{
		char b_titulo[50];
		
		printf("Buscar titulo:\n"); 
		fflush(stdin);
		scanf("%[^\n]s",b_titulo);
		for (i = 0; i < TAM; i++) {
			if (strcmp(livros[i].titulo, b_titulo) == 0) {
				printf("Titulo da Obra: %s, Autor: %s, Ano: %d \n",livros[i].titulo, 
																   livros[i].autor, 
																   livros[i].ano);
			}
		}
	} 
	
	void buscar (Livros livros[])
	{
		int opcao;
		char b_autor[50];
		int b_ano;
		
		while (1) {
			menuBusca();
			printf("Entre com a opcao desejada: ");
			scanf("%d",&opcao);
			if (!opcao) break;
			
			switch (opcao) {
				case 1:{
					buscarPorTitulo (livros);
				}
				break;
		
				case 2:{
					printf("Buscar Autor:\n");
					fflush(stdin);
					scanf("%[^\n]s",b_autor);
					for (i = 0; i < TAM; i++) {
						if (strcmp(livros[i].autor, b_autor) == 0) {
							printf("Titulo da Obra: %s, Autor: %s, Ano: %d \n",livros[i].titulo, 
																			   livros[i].autor, 
																			   livros[i].ano);
						}
					}
				}
				break;
		
				case 3:{
					printf("Buscar Ano:\n");
					fflush(stdin);
					scanf("%d",&b_ano);
					for (i = 0; i < TAM; i++) {
						if (livros[i].ano == b_ano) {
							printf("Titulo da Obra: %s, Autor: %s, Ano: %d \n",livros [i].titulo, 
																			   livros[i].autor, 
																			   livros[i].ano);
						}
					}
				}
				break;
			}
		}
	}
	
	
int main ()
{
	// Dicionário de dados:
	Livros livros[TAM];
	
	// Chamada de funções:
	entradaDados (livros);
	buscar (livros);
	
	return 0;
}

