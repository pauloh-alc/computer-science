// Exercício 3 - Registros.
// Discente: Paulo Henrique Diniz de Lima Alencar.
#include <stdio.h>
#define TAM 2
int i;

// Estrutura do tipo Notas, formada pelos atributos: nota1, nota2, nota3.
typedef struct {
	float nota1, nota2, nota3;
} Notas;

// Estrutura do tipo Aluno, formada pelos atributos: nome, notas(outra estrutura), matrícula e media.
typedef struct {
	char nome[50];
	int matricula;
	Notas notas;
	float media;
} Aluno;

	// Procedimento: exibe menu de navegação.
	void menu () 
	{
		printf("\n");
		puts("[0] SAIR.");
		puts("[1]Encontre o aluno com maior nota de cada prova.");
		puts("[2]Encontre o aluno com maior media geral.");
		puts("[3]Encontre o aluno com menor media geral.");
		puts("[4]Listar situacao geral dos alunos.");
	}

	// Procedimento: amazena os dados de cada aluno.
	void entradaDados (Aluno estudante[])
	{
		for (i = 0; i < TAM; i++) {

			printf("Nome: ");
				fflush(stdin);
			scanf("%[^\n]s",estudante[i].nome);
			printf("Nota 1: "); scanf("%f",&estudante[i].notas.nota1);
			printf("Nota 2: "); scanf("%f",&estudante[i].notas.nota2);
			printf("Nota 3: "); scanf("%f",&estudante[i].notas.nota3);
			printf("Matricula: ");
			scanf("%d",&estudante[i].matricula);
			
			printf("\n");
		}
	}
	
	// Procedimento: exibe as informações gerais dos estudantes.
	void saidaDados (Aluno estudante[]) 
	{
		for (i = 0; i < TAM; i++) {
			printf("Nome: %s | Matricula: %d | [Nota 1: %.1f | Nota 2: %.1f | Nota 3: %.1f] |",
			estudante[i].nome,
			estudante[i].matricula,
			estudante[i].notas.nota1, estudante[i].notas.nota2, estudante[i].notas.nota3);
			
			printf(" Media: %.2f |",estudante[i].media);
			printf(" Situacao: ");
			if 		(estudante[i].media >= 7.0) 						      printf("Aprovado ! \n");
			else if (estudante[i].media >= 4.0  &&  estudante[i].media < 7.0) printf("Avaliacao Final ! \n");
			else 														      printf("Reprovado ! \n");
		}
	}
	
	// Função: encontra o aluno com a maior nota1.
	int maiorNota1 (Aluno estudante[])
	{
		float maior;
		int posicao = 0;
		
		maior = estudante[0].notas.nota1;
		for (i = 1; i < TAM; i++) {
			if (estudante[i].notas.nota1 > maior) {
				maior = estudante[i].notas.nota1;
				posicao = i;
			}
		}
		return posicao;
	}
	
	// Função: encontra o aluno com a maior nota2.
	int maiorNota2 (Aluno estudante[])
	{
		float maior;
		int posicao = 0;
		
		maior = estudante[0].notas.nota2;
		for (i = 1; i < TAM; i++) {
			if (estudante[i].notas.nota2 > maior) {
				maior = estudante[i].notas.nota2;
				posicao = i;
			}
		}
		return posicao;
	}
	
	// Função: encontra o aluno com a maior nota3.
	int maiorNota3 (Aluno estudante[])
	{
		float maior;
		int posicao = 0;
		
		maior = estudante[0].notas.nota3;
		for (i = 1; i < TAM; i++) {
			if (estudante[i].notas.nota3 > maior) {
				maior = estudante[i].notas.nota3;
				posicao = i;
			}
		}
		return posicao;
	}
	
	// Procedimento: Calcula a média de cada estudante cadastrado.
	void media (Aluno estudante[]) 
	{
		for (i = 0; i < TAM; i++) {
			estudante[i].media = (estudante[i].notas.nota1 + estudante[i].notas.nota2 + estudante[i].notas.nota3) / 3.0;
		}
	}
	
	// Função: Encontra  a posição do aluno com maior média Geral.
	int mediaMaior (Aluno estudante[]) 
	{	
		float mediaMaior;
		int posicao = 0;
		
		mediaMaior = estudante[0].media;
		for (i = 0; i < TAM; i++) {
			if (estudante[i].media > mediaMaior) {
				mediaMaior = estudante[i].media;
				posicao = i;
			}
		}
		return posicao;
	}
	// Função: Encontra a posição do aluno com menor média Geral.
	int mediaMenor (Aluno estudante[])
	{
		float mediaMenor;
		int posicao = 0;
		
		mediaMenor = estudante[0].media;
		for (i = 0; i < TAM; i++) {
			if (estudante[i].media < mediaMenor) {
				mediaMenor = estudante[i].media;
				posicao = i;
			}
		}
		return posicao;
	}
	
// Função principal:
int main ()
{
	int opcao;
	Aluno estudante[TAM];

	
	// chamada de algumas funções
	entradaDados (estudante);
	media (estudante);
	
	while (1) {
		menu ();
		printf("opcao: ");
		scanf("%d",&opcao);
		if(!opcao) break;
		
		switch (opcao) {
			case 1:{ // opcao 1 do menu
				int PmaiorN1 = maiorNota1 (estudante);
				int PmaiorN2 = maiorNota2 (estudante);
				int PmaiorN3 = maiorNota3 (estudante);
				
				printf("Aluno(a) %s possui maior nota1: %.1f. \n",estudante[PmaiorN1].nome,estudante[PmaiorN1].notas.nota1);
				printf("Aluno(a) %s possui maior nota2: %.1f. \n",estudante[PmaiorN2].nome,estudante[PmaiorN2].notas.nota2);
				printf("Aluno(a) %s possui maior nota3: %.1f. \n",estudante[PmaiorN3].nome,estudante[PmaiorN3].notas.nota3);
				break;
			}
			case 2:{ // opcao 2 do menu
				int PmaiorMedia = mediaMaior (estudante);
				printf("Aluno(a) %s possui maior media geral: %.1f. \n",estudante[PmaiorMedia].nome,estudante[PmaiorMedia].media);
				break;
			}
			case 3:{ // opcao 3 do menu
				int PmenorMedia = mediaMenor (estudante);
				printf("Aluno(a) %s possui menor media geral: %.1f. \n",estudante[PmenorMedia].nome,estudante[PmenorMedia].media);
				break;
			}
			case 4:{ // opcao 4 do menu
				saidaDados (estudante);
				break;
			}
			default: // opcao inválida
				printf("Erro: voce entrou com uma opcao invalida !! \n");
			break;
		}
	}
	return 0;
}
