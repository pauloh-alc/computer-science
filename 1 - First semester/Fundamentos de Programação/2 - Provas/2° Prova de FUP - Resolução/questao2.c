// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Questão 2:

#include <stdio.h>
#define TAM 10
	
int main ()
{
	// Dicionário de dados:
	int m[TAM][TAM];
	int nova[TAM][TAM];
	int i, j;
	int linhaMinima, linhaMaxima, colunaMinima, colunaMaxima;
	int lin, col; 
	
	// Gerando Matriz:
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			m[i][j] = i + j;
		}
	}
	
	// Exibindo Matriz gerada:
	for (i = 0; i < TAM; i++) {
		printf("|");
		for (j = 0; j < TAM; j++) {
			printf("\t%d",m[i][j]);
		}
		printf("\t|\n");
	}
	printf("\n");
	
	// Entrada de dados: pegando valores mínimos e máximos para linhas e colunas
	
	// Linhas:
	printf("Entre com a 'linha minima': ");
	scanf("%d",&linhaMinima);
	printf("Entre com a 'linha maxima': ");
	scanf("%d",&linhaMaxima);
	
	// Colunas:
	printf("Entre com a 'coluna minima': ");
	scanf("%d",&colunaMinima);
	printf("Entre com a 'coluna maxima': ");
	scanf("%d",&colunaMaxima);
	
	// Processamento: gerando uma nova matriz nova[0..lin-1][0..col-1]
	lin = 0;
	for (i = linhaMinima; i <= linhaMaxima; i++) {
		col = 0;
		for (j = colunaMinima; j <= colunaMaxima; j++) {
			nova[lin][col] = m[i][j];
		col++;
		}
	lin++;	
	}
	printf("\n");
	
	// Saída de dados: exibindo nova matriz 
	for (i = 0; i < lin; i++) {
		printf("|");
		for (j = 0; j < col; j++) {
			printf("\t%d ",nova[i][j]);
		}
		printf("\t|\n");
	}
	return 0;
}
