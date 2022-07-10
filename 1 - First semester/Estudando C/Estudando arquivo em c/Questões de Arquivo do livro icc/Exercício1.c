// Exercício 1

#include <stdio.h>
#include <stdlib.h>
	int conta_caracteres (FILE* p, char nome_arquivo[])
	{
		int qtd = 0;
		
		p = fopen (nome_arquivo, "r");
		if (p == NULL) {
			printf("Erro na abertura do arquivo !!\n");
			exit(1);
		}
 		while (1) {
 			char c = getc (p);
 			if (feof(p)) {
 				break;
			} 
 			if (c != ' ') qtd += 1;
		}
		
		return qtd;
	 }	
int main ()
{
	FILE* arquivo;
	char nome_arquivo[30];
	
	printf("Entre com o nome do arquivo que voce deseja abrir: ");
	scanf("%[^\n]s",nome_arquivo);
	
	int quantidade = conta_caracteres (arquivo, nome_arquivo);
	
	printf("Quantidade de caractere no arquivo: %d\n",quantidade);
	
	return 0;
}
