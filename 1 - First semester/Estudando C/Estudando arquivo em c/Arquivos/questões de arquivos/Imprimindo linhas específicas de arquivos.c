#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE* arquivo;
	int inicial, final;
	char nome_arquivo[30], aux[30];
	
	printf("Entre com um nome de um arquivo: ");
	scanf("%s",nome_arquivo);
	
	arquivo = fopen(nome_arquivo, "r");
	
	if (arquivo == NULL) {
		printf("Erro na abertura do arquivo !! \n");
		exit(1);
	}
	
	printf("Entre com linha inicial e linha final separe os valores por ',': ");
	scanf("%d,%d",&inicial,&final);
	
	int linhas = 0;
	while (1) {
		if (feof(arquivo)) {
			break;
		}
		linhas++;
		fgets(aux, sizeof(aux), arquivo);
		if (linhas >= inicial && linhas <= final) {
			printf("%s",aux);
		}
	}
	return 0;
}
