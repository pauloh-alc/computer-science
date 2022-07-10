#include <stdio.h>
#include <stdlib.h>
#define TAM 10

#define NOME_ARQUIVO "teste2.txt"

int main () 
{
	// Dicionário de dados:
	FILE *arquivo;
	int valor, i, v[TAM], n;
	
	// Abertura de arquivo:
	arquivo = fopen (NOME_ARQUIVO,"r");
	if (arquivo == NULL) {
		printf("ERRO: erro na abertura do arquivo !!\n");
		exit(1);
	}
	
	// Processamento:
	i = 0;
	while(1) {
		if (feof(arquivo)) {
			break;
		}
		fscanf(arquivo,"%d",&valor);
		if (valor >= 0) {
			v[i] = valor;
			i++;
		}
	}
	fclose(arquivo);
	
	// Abrindo arquivo para escrita
	arquivo = fopen (NOME_ARQUIVO,"w");
	
	if (arquivo == NULL) {
		printf("ERRO: erro na abertura do arquivo !!\n");
		exit(1);
	}
	
	// Escrevendo em arquivo:
	n = 0;
	while (n < i) {
		fprintf(arquivo,"%d\n",v[n]);
	n++;	
	}
	fclose(arquivo);
	return 0;
}
