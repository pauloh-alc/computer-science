#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE *arquivo;
	
	arquivo = fopen("arquivo.txt", "w");
	if (arquivo == NULL) {
		printf("Erro na abertura do arquivo !! \n");
		exit(1);
	}
	
	int i = 1;
	while (i <= 100) {
		fprintf(arquivo,"%d\n",i);
	i++;
	}
	
	return 0;
}
