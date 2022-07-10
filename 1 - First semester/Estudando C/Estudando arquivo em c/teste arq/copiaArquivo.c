#include <stdio.h>
#include <stdlib.h>
// Cópia de arquivo:
int main ()
{
	FILE *fon, *cop;
	char fonte[30], copia[30];
	
	// Nome do arquivo de origem que quero copiar.
	printf("Arquivo origem: ");
	scanf("%s",fonte); // é necessário uma string para ler esse nome.
	
	// Nome do arquivo de copia.
	printf("Arquivo destino: ");
	scanf("%s",copia);
	
	// Abrindo arquivo fonte para leitura
	fon = fopen(fonte, "r");
	if (fon == NULL) {
		printf("Erro na abertura do arquivo !! \n");
		exit(1);
	}
	
	// Abrindo arquivo copia para escrita.
	cop = fopen(copia, "w");
	if (fon == NULL) {
		printf("Erro na abertura do arquivo !! \n");
		exit(1);
	}
	
	// Realizando cópia 
	while (!feof(fon)) {
		char c = getc(fon); // pegando cada caractere do arquivo fonte
		fprintf(cop,"%c",c); // escrevendo cada caractere no arquivo copia
	}
	
	fclose(fon); // fechando arquivos, para que não sejam corrompidos.
	fclose(cop);
	
	return 0;
}
