#include <stdio.h>
#include <stdlib.h>

#define NOME_ARQUIVO "arquivo.txt"

int main ()
{
	FILE *arquivo;		
	float valor, min, max, media, n;
	
	// Abrindo arquivo para leitura:
	arquivo = fopen (NOME_ARQUIVO, "r");
	
	// Tratamento de erro:
	if (arquivo == NULL) {
		printf("Erro na abertura de arquivo !!\n");
		exit(1);
	}
	
	// Processamento:
	fscanf(arquivo,"%f",&valor); // Leitura da primeira linha do arquivo.
	max = valor;
	min = valor;
	media = valor;
	
	n = 1;
	while (!feof(arquivo)) {
		fscanf(arquivo,"%f",&valor);
		if (valor > max) max = valor;
		if (valor < min) min = valor;
		media += valor;
		n += 1;
	}
	media = media / n;
	fclose(arquivo); 
	
	// Saída de dados:
	printf("Maior valor no arquivo e: %f\n",max);
	printf("Menor valor no arquivo e: %f\n",min);
	printf("Media daos valores: %f\n",media);
	
	return 0;
}
