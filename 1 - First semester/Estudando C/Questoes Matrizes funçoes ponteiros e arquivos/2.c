#include <stdio.h>
#define TAM 10
	
int main ()
{
	// Dicionário de dados:
	int m[TAM][TAM];
	int usuario[TAM][TAM], lin, col, k, v;
	int i, j;
	
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
		printf("|\n");
	}
	printf("\n");
	// Entrada de dados: recebe valores das dimensões da nova matriz:
	printf("Entre com a qtd de 'linhas' da sua nova matriz: ");
	scanf("%d",&lin);
	printf("Entre com a qtd de 'colunas' da sua nova matriz: ");
	scanf("%d",&col);
	printf("\n");
	
	// Inserindo valores na matriz:
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			printf("usuario[%d][%d] = ",i,j);
			scanf("%d",&usuario[i][j]);
		}
	}
	
	// Entrada de dados: escolhendo coordenada (linha,coluna)
	int linha, coluna;
	
	printf("Entre com a linha: ");
	scanf("%d",&linha);
	printf("Entre com a coluna: ");
	scanf("%d",&coluna);
	
	// Processamento: realizando substituições na matriz gerada
	for (i = 0; i < lin; i++) {
		for (j = 0; j < col; j++) {
			k = linha  + i;
			v = coluna + j;
			m[k][v] = usuario[i][j];
		}
	}

	// Saída de dodos: exibindo matriz com alterações
	for (i = 0; i < TAM; i++) {
		printf("|");
		for (j = 0; j < TAM; j++) {
			printf("\t%d ",m[i][j]);
		}
		printf("\t|\n");
	}
	
	return 0;
}
