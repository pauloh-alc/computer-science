// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Questão 4:

#include <stdio.h>
#include <stdlib.h>
#define NOME_ARQUIVO1 "notas.txt"
#define NOME_ARQUIVO2 "medias.txt"

int main ()
{
	// Dicionário de dados:
	FILE *arquivo, *media;
	char aux[100];
	float valor, soma;
	float v[5];
	int k, i, j;
	
	// Abrindo arquivo para leitura:
	arquivo = fopen(NOME_ARQUIVO1, "r");
	if (arquivo == NULL ){
		printf("Erro: erro na abertura do arquivo para leitura.\n");
		exit(1);
	}
	// Abrindo arquivo para escrita:
	media = fopen(NOME_ARQUIVO2, "w");
	if (media == NULL ){
		printf("Erro: erro na abertura do arquivo para escrita.\n");
		exit(1);
	}
	// Processamento:
	i = 0;
	while (1) {
		k = 0;
		if (feof (arquivo)) {
			break;
		}
		if (i % 2 == 0) {
			fscanf(arquivo,"%s",aux);
			fprintf(media,"%s = ",aux);
		}
		else {
			soma = 0;
			for (j = 0; j < 3; j++) {
				fscanf(arquivo,"%f",&valor);
				soma = soma + valor;
			}
			v[k] = soma / 3.0;
			fprintf(media,"%f\n",v[k]);
		k++;
		}
	i++;
	}
	
	// Fechando arquivos para evitar corrompimento:
	fclose (arquivo);
	fclose(media);

	return 0;
}
