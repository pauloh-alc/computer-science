#include <stdio.h>

int main()
{
	// Dicionário de dados:
	int notas[10][3], menoresNotas[10], aProva[10];
	int i, j, menorNota, provaMenor, prova1 = 0, prova2 = 0, prova3 = 0;
	
	// Entrada de dados:
	for (i = 0; i < 10; i++) {
		printf("[Aluno %d] \n", i + 1);
		for (j = 0; j < 3; j++) {
			printf(" Prova %d: ", j + 1);
			scanf("%d", &notas[i][j]);
		}
		printf("\n");
	}
	
	// Processamento:
	// Trecho obtém a menor nota em cada linha, armazenado a menor nota em um vetor.
	for (i = 0; i < 10; i++) {
		menorNota = notas[i][0];
		provaMenor = 0;
		for (j = 0; j < 3; j++) {
			if (notas[i][j] < menorNota) {
				menorNota = notas[i][j];
				provaMenor = j;
			}
		}
		// Trecho realiza a contagem de quantos alunos tiveram menor nota em cada uma das provas. 
		if (provaMenor == 0) 	  prova1 += 1;
		else if (provaMenor == 1) prova2 += 1;
		else 				      prova3 += 1;
		
		menoresNotas[i] = menorNota;           // Armazena a menor nota de cada um dos [0..9] alunos.
		aProva[i] = provaMenor + 1;			   // Armazena a prova que o aluno teve a menor nota (pode ser prova1, prova2 ou prova3).
	}
	
	// Saída de dados:
	
	printf("\n Relatorio: \n\n");
	
	 for (i = 0; i < 10; i++) {
	 	printf("Aluno %d:\n",i + 1);
	 	printf("Menor nota na prova %d = %d. \n",aProva[i], menoresNotas[i]);
	 }
	
	printf("\n");
	printf(">> %d alunos tiveram menor nota na prova 1. \n",prova1);
	printf(">> %d alunos tiveram menor nota na prova 2. \n",prova2);
	printf(">> %d alunos tiveram menor nota na prova 3. \n",prova3);

return 0;
}
