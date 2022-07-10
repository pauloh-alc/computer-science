#include <stdio.h>
#define NOME_ARQUIVO "binario.txt"
int main ()
{
	
	FILE* arq1;
	int inteiro = 10;
	float flutuante = 10.5;
	char carac = 'a';
	
	arq1 = fopen (NOME_ARQUIVO, "wb");
	// Escrevendo arquivo binário
	fwrite (&inteiro, sizeof(int), 1, arq1);
	fwrite (&flutuante, sizeof(int),1,arq1);
	fwrite (&carac, sizeof(int),1,arq1);
	
	fclose(arq1);
	
	arq1 = fopen (NOME_ARQUIVO, "rb");
	// Lendo arquivo binário
	fread (&inteiro, sizeof(int), 1, arq1);
	fread (&flutuante, sizeof(int),1,arq1);
	fread (&carac, sizeof(int),1,arq1);
	
	printf("%d\n",inteiro + 10);
	printf("%f\n",inteiro);
	printf("%c\n",carac);
	
	fclose(arq1);
	return 0;
}
