#include <stdio.h>
#include <stdlib.h>
#define NOME_ARQUIVO "meu_texto.txt"
#define TAM_STR 50

int main ()
{
	int inteiro;
	float real;
	char str[TAM_STR];

	FILE *arq;
		
	if (!(arq = fopen (NOME_ARQUIVO,"r"))) {
		printf("Erro na abertura do arquivo !");
		exit(1);
	}
	fscanf (arq,"%d\n%[^\n]s\n%f",&inteiro,str,&real);
	printf("%d\n%s\n%f",inteiro,str,real);
	fclose (arq);
	
	return 0;
}
