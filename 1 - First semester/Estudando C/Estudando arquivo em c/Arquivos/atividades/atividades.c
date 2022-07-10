#include <stdio.h>
#include <stdlib.h>
#define NOME_ARQUIVO "atividades.txt"

// Estrutura do tipo Atividade, com atributos: nome, descrição e dia.
typedef struct{
	char nome[30];
	char descricao[30];
	int dia;	
} Atividade;
	
	// Procedimento: Menu de navegação
	void menu ()
	{
		puts("[0] SAIR.");
		puts("[1] Cadastrar atividade.");
		puts("[2] Listar Atividades. ");	
	}
	
	// Procedimento: cadastra atividades no arquivo.
	void cadastrar (FILE *arquivo, Atividade atv)
	{
		printf("Entre com o nome da atividade: ");
		fflush(stdin);
		scanf("%[^\n]s",atv.nome);
		printf("Entre com a descricao: ");
		fflush(stdin);
		scanf("%[^\n]s",atv.descricao);
		printf("Entre com o dia: ");
		scanf("%d",&atv.dia);
		
		arquivo = fopen (NOME_ARQUIVO, "a");
		if (arquivo == NULL) {
			printf("Erro na abertura de arquivo ! \n");
			exit(1);
		}
		fprintf(arquivo,"Nome: %s\nDescricao: %s\nDia: %d\n",atv.nome,atv.descricao,atv.dia);
		
	fclose(arquivo);	
	}
	
	// Procedimento: lista as pessoas cadastradas no arquivo.
	void leitura (FILE *arquivo, Atividade atv) 
	{
		char ch;
		arquivo = fopen (NOME_ARQUIVO, "r");
		
		while (!feof(arquivo)) {
			ch = getc(arquivo);
			printf("%c",ch);	
		}
		fclose(arquivo);
	}
// Função: principal
int main ()
{
	FILE *arquivo;
	Atividade atv;
	int opcao;
	
	while(!0) {
		menu ();
		printf("Entre com opcao: ");
		scanf("%d",&opcao);
		if (!opcao) break;
		
		switch (opcao) {
			case 1:{
				cadastrar (arquivo, atv);
				break;
			}
			case 2:{
				leitura (arquivo, atv);
				break;
			}
		}
	}
	return 0;
}
