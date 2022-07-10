#include <stdio.h>
#define NOME_ARQUIVO "arquivo.data"
#define TAM 5

	void escreve (FILE* arquivo, int size, char nome_arquivo[])
	{
		int i, numero;
		
		arquivo = fopen(nome_arquivo, "wb");

		for (i = 0; i < size; i++) {
			printf("Numero %d: ",i);
			scanf("%d",&numero);
			fwrite(&numero, sizeof(numero),1,arquivo);
		}
		
		fclose(arquivo);
		
	}
	
	void exibe (FILE* arquivo, int size, char nome_arquivo[], int v[])
	{
		int i, numero;
		arquivo = fopen(nome_arquivo, "rb");
		
		for (i = 0; i < size; i++) {
			fread(&numero, sizeof(numero),1,arquivo);
			printf("%d\n",numero);
			v[i] = numero;
		}
		fclose(arquivo);
	}
	
	void maior (int v[])
	{
		int i, maior;
		
		maior = v[0];
		for (i = 0; i < TAM; i++) {
			if (v[i] > maior) {
				maior = v[i];
			}
		}
		printf("maior = %d. \n", maior);
		
		printf("vetor: \n");
		for (i = 0; i < TAM; i++) {
			printf("[%d]",v[i]);
		}
	}
	
int main ()
{
	FILE *arquivo;
	int v[TAM];
	
	escreve (arquivo, 5, NOME_ARQUIVO);
	exibe (arquivo, 5, NOME_ARQUIVO, v);
	maior (v);
	
	return 0;
}
