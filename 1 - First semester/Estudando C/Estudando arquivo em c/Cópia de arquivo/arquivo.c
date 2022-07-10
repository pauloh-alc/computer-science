#include <stdio.h>
#include <stdlib.h>

int main () 
{
	char arquivo_fonte[30];
	char arquivo_copia[30];
	FILE *origem, *copia;
	int i, numero, n, *v, *p, *f;
	
	printf("Entre com o arquivo fonte: ");
	scanf("%s",arquivo_fonte);
	
	origem = fopen (arquivo_fonte, "w");
	if (origem == NULL) {
		printf("Erro: erro na abertura do arquivo !!\n");
		exit(1);
	}
	else {
		printf("Aquivo abriu com sucesso !!\n");
	}
	
	printf("Escreva 5 numeros no arquivo:\n");
	for (i = 0; i < 5; i++) {
		scanf("%d",&numero);
		fprintf(origem,"%d\n",numero);
	}
	fclose (origem);
	
	origem = fopen (arquivo_fonte, "r");
	if (origem == NULL) {
		printf("Erro: erro na abertura do arquivo !!\n");
		exit(1);
	}
	
	printf("Entre com o arquivo copia: ");
	scanf("%s",arquivo_copia);
	
	copia = fopen (arquivo_copia, "w");
	if (origem == NULL) {
		printf("Erro: erro na abertura do arquivo !!\n");
		exit(1);
	}
	// Alocando memória dinamicamente:
	v = (int*) malloc (5 * sizeof(int));

	i = 0;
	while (1) {
		if (feof(origem)) {
			break;
		}
		fscanf(origem,"%d\n",&n);
		fprintf(copia,"%d\n",n);
		v[i] = n;
	i++;
	}
	
	fclose(origem);
	fclose(copia);
	
	f = &v[5];
	for (p = &v[0]; p < f; p++) {
		printf("%d,",*p);
	}
	return 0;
}
