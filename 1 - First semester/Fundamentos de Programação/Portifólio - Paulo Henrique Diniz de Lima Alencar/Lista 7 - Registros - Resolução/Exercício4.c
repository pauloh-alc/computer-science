#include <stdio.h>
#include <string.h>

#define TAM 4

int i;
// Estrutura do tipo Alunos, com os seguintes atributos: nome, matricula e media final
typedef struct {
	char nome[50];
	int matricula;
	float mediaFinal;
} Alunos;

	// Procedimento: entrada de dados de cada aluno
	void entradaDados (Alunos estudantes[])
	{
		for (i = 0; i < TAM; i++) {
			
			printf("Nome: ");
			fflush(stdin);
			scanf("%[^\n]s",estudantes[i].nome);
			printf("Matricula: ");
			fflush(stdin);
			scanf("%d",&estudantes[i].matricula);
			printf("Media final: ");
			fflush(stdin);
			scanf("%f",&estudantes[i].mediaFinal);
			
			printf("\n");
		}
	}
	
	// Procedimento: divide os alunos em 2 vetores (reprovados e aprovados)
	void dividir (Alunos estudantes[], Alunos estudantesA[], Alunos estudantesR[], int *a, int *r)
	{
		for (i = 0; i < TAM; i++) {
			if (estudantes[i].mediaFinal >= 6) {
				strcpy(estudantesA[*a].nome, estudantes[i].nome);
				estudantesA[*a].matricula = estudantes[i].matricula;
				estudantesA[*a].mediaFinal = estudantes[i].mediaFinal; 
			*a += 1;
			}
			else {
				strcpy(estudantesR[*r].nome, estudantes[i].nome);
				estudantesR[*r].matricula = estudantes[i].matricula;
				estudantesR[*r].mediaFinal = estudantes[i].mediaFinal;
			*r += 1; 
			}
		}
	}
	
	void imprimir (Alunos estudantesA[], Alunos estudantesR[], int a, int r) 
	{
		printf("Aluno Aprovados:\n");
		for (i = 0; i < a; i++) {
			printf("Nome: %s, Matricula: %d, Media Final: %.2f \n",estudantesA[i].nome,
																   estudantesA[i].matricula,
																   estudantesA[i].mediaFinal);
		}
		
		printf("\n\nAluno Reprovados:\n");
		for (i = 0; i < r; i++) {
			printf("Nome: %s, Matricula: %d, Media Final: %.2f \n",estudantesR[i].nome,
																   estudantesR[i].matricula,
																   estudantesR[i].mediaFinal);
		}
	}
// Função principal
int main ()
{
	// Dicionário de dados:
	Alunos estudantes[TAM];
	int a = 0, r = 0;
	
	Alunos estudantesA[TAM]; // Alunos aprovados
	Alunos estudantesR[TAM]; // Alunos reprovados
	
	// Chamda de funções:
	entradaDados (estudantes);
	dividir      (estudantes, estudantesA, estudantesR, &a, &r);
	imprimir     (estudantesA, estudantesR, a, r);
	
	return 0;
}
