#include <stdio.h>
#define TAM 50

typedef struct{
	char nome[30];
	char curso[30];
	int matricula;
} Aluno;

	void leitura (Aluno estudante[])
	{
		int i;
		for (i = 0; i < TAM; i++) {
			
			fflush(stdin);
			printf("Nome do Aluno: ");
			scanf("%[^\n]s",estudante[i].nome);
			
			fflush(stdin);
			printf("Curso do Aluno: ");
			scanf("%[^\n]s",estudante[i].curso);
			
			printf("Matricula do Aluno: ");
			scanf("%d",&estudante[i].matricula);
			
			printf("\n");
		}
	}
	
	void listar (Aluno estudante[])
	{
		int i;
		for (i = 0; i < TAM; i++) {
			printf("Nome: %s, Curso: %s, Matricula: %d. \n",estudante[i].nome, estudante[i].curso, estudante[i].matricula);
		}
	}
int main ()
{
	Aluno estudante[TAM];
	
	// Chamda de funções:
	leitura (estudante);
	listar  (estudante);
	
	return 0;
}
