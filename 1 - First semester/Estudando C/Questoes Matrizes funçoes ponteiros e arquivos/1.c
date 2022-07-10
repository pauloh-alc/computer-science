#include <stdio.h>
#include <stdlib.h>
#define TAM 20
#define NOME_ARQUIVO1 "imagem.txt"
#define NOME_ARQUIVO2 "imagemPretoBranco.txt"

int main ()
{
	// Dicionário de dados:
	FILE* arquivoCor, *arquivoPeB;
	char P3[2]; 
	int i, j;
	int COL, LIN, valorMaxCor;
	int vetor[TAM], soma, valor;
	
	// Abrindo Aquivo para leitura:
	arquivoCor = fopen (NOME_ARQUIVO1, "r");
	if (arquivoCor == NULL) {
		printf("Erro: erro na avertura do arquivo para leitura !!\n");
		exit(1);
	}
	
	// Realizando leitura:
	fscanf(arquivoCor,"%s",P3); 		  // P3
	fscanf(arquivoCor,"%d",&COL); 		  // Coluna
	fscanf(arquivoCor,"%d",&LIN); 		  // Linha
	fscanf(arquivoCor,"%d",&valorMaxCor); // 255
	
	// Processamento: obtém a média, colocando cada média em uma posição do vetor 'vetor'
	for (i = 0; i < (LIN * COL); i++) {
		soma = 0;
		for (j = 0; j < LIN; j++) {
			fscanf(arquivoCor,"%d",&valor);
			soma += valor;
		}
		vetor[i] = soma / 3.0;
	}
	fclose(arquivoCor);// Fechando arquivo para evitar corrompimento.
	
	
	// Abrindo arquivo para escrita:
	arquivoPeB = fopen (NOME_ARQUIVO2, "w");
	if (arquivoPeB == NULL) {
		printf("Erro: erro na avertura do arquivo para leitura !!\n");
		exit(1);
	}
	
	// Realizando escrita em novo arquivo: 
	char P1[] = "P1";
	
	fprintf(arquivoPeB,"%s\n",P1);			// Escreve P1 no arquivo
	fprintf(arquivoPeB,"%d %d\n",COL,LIN);  // Escreve COL e LIN
	fprintf(arquivoPeB,"%d\n",valorMaxCor); // Escreve valor máximo de cor
	
	// Realiza a escrita das médias:
	for (i = 0; i < (LIN * COL); i++) { 
		fprintf(arquivoPeB,"%d\n",vetor[i]);
	}
	
	fclose(arquivoPeB); // Fechando arquivo para evitar corrompimento.
	
	return 0;
}
