#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *arq1, *arq2;
	
	arq1 = fopen ("somente_escrita.txt","w");
	arq2 = fopen ("leio_e_escrevo.meu","a+b");
	
	if (arq1 == NULL || arq2 == NULL) {
		printf("Erro na abertura de arquivos !\n");
		exit(1);
	}
	
	// Fechando arquivos.
	fclose (arq1);
	fclose (arq2);
	
	return 0;
}
