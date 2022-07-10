#include <stdio.h>
#include <stdlib.h>

// Estrutura do tipo Aluno.
// Atributos: nome, matricula e curso.

typedef struct {
	char nome[30];
	int  matricula;
	char curso[30];
} Aluno;
	
	// Procedimento: menu de exibição
	void menu () 
	{
		puts("[0] EXIT");
		puts("[1] CADASTRAR");
		puts("[2] LISTAR");	
	}
	// Procedimento: cadastro de alunos
	void entradaDados (Aluno *alunos, int n)
	{
		int i;
		
		for (i = 0; i < n; i++) {
			fflush(stdin);
			printf("Nome: ");
			scanf("%[^\n]s",alunos[i].nome);
			printf("Matricula: ");
			fflush(stdin);
			scanf("%d",&alunos[i].matricula);
			printf("Curso: ");
			fflush(stdin);
			scanf("%[^\n]s",alunos[i].curso);
			printf("\n");
		}
	}
	// Procedimento: listagem de alunos
	void listar (Aluno *alunos, int n) 
	{
		int i;
		for (i = 0; i < n; i++) {
			printf("Nome: %s (matricula: %d, curso: %s)\n",alunos[i].nome,
														   alunos[i].matricula,
														   alunos[i].curso);
		}
		free (alunos);
	}
	
int main ()
{
	Aluno *alunos;
	int n, opcao;
	
	printf("Entre com um numero 'n' de alunos: ");
	scanf("%d",&n);
	
	alunos = (Aluno*) malloc (n * sizeof(Aluno)); // Alocando memória para Estrutura.
	
	if (alunos == NULL) {
		printf("Erro: erro na alocacao de memoria !! \n");
		exit(1);
	}
	else {
		printf("Memoria alocada com sucesso ! \n");
	}
	
	while (1) {
		menu ();
		printf("Entre com uma opcao: ");
		scanf("%d",&opcao);
		if(!opcao) break;
		
		switch (opcao) {
			case 1:{
				entradaDados(alunos, n);
			break;
			}
			case 2:{
				listar(alunos, n);
			break;
			}
		}
	}
	
	return 0;
}
