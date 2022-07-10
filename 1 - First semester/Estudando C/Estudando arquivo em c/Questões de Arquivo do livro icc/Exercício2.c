#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *origem, *copia;
	char nome_arquivo[30];
	char arquivo_copia[30];
	
	printf("Entre com o nome do arquivo que voce deseja acessar: ");
	scanf("%s",nome_arquivo);
	
	printf("Nome da copia: ");
	scanf("%s",arquivo_copia);
	
	origem = fopen (nome_arquivo, "r");
	if (origem == NULL) {
		printf("Erro na abertura de arquivo !!\n ");
		exit(1);
	}
	
	copia = fopen (arquivo_copia, "w");
	if (origem == NULL) {
		printf("Erro na abertura de arquivo !!\n ");
		exit(1);
	}
	
	while (1) {
		if (feof(origem)) {
			break;
		}
		char c = getc (origem);
		if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
			fprintf(copia,"%c",c);
		}
	}
	
	fclose(origem);
	fclose(copia);
	
	return 0;
}
