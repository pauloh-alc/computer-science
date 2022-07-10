#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// Dicionário de dados:
	FILE *arquivo, *media;
	char aux[100];
	float valor, soma;
	float v[5];
	int k, i, j;
	
	// Abrindo arquivo para leitura:
	arquivo = fopen("notas.txt", "r");
	if (arquivo == NULL ){
		printf("Erro: erro na abertura do arquivo para leitura.\n");
		exit(1);
	}
	// Abrindo arquivo para escrita:
	media = fopen("media.txt", "w");
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
