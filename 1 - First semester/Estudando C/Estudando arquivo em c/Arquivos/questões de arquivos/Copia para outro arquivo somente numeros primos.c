#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *arquivo, *copia;
	int i, div, valor;
	
	// Abertura de arquivo para leitura:
	arquivo = fopen("arquivoPrimos.txt","r");
	if (arquivo == NULL) {
		printf("Erro: erro na abertura de arquivos !! \n");
		exit(1);
	}
	
	// Abrindo arquivo para copia:
	copia = fopen("copia.txt","w");
	if (arquivo == NULL) {
		printf("Erro: erro na abertura de arquivos !! \n");
		exit(1);
	}
	
	while (1) {
		div = 0;
		if (feof(arquivo)) {
			break;
		}
		fscanf(arquivo,"%d",&valor);
		for (i = 1; i <= valor; i++) {
			if (valor % i == 0) {
				div++;
			}
		}
		if (div == 2) {
			fprintf(copia,"%d\n",valor);
		}
	}
	
	fclose(arquivo);
	fclose(copia);
	
	return 0;
}
