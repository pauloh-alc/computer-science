#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	FILE* arquivo;
	char nome_arquivo[30], palavra[30], aux[500];
	
	printf("Entre com o nome do arquivo que voce deseja abrir: ");
	scanf("%[^\n]s",nome_arquivo);
	
	printf("Entre com uma palavra: ");
	scanf("%s",palavra);
	
	arquivo = fopen (nome_arquivo, "r");
	if (arquivo == NULL) {
		printf("Erro na abertura do arquivo !!\n");
		exit(1);
	}
	
	while (1) {
		if (feof(arquivo)) {
			break;
		}
		fgets(aux, sizeof(aux),arquivo);
		int i = 0;
		
		int x = 0;
		int z; 
		
		while (aux[i] != '\n') {
			z = i;
			if (aux[i] == palavra[0]) {
				while (palavra[x] != '\0' && palavra[x] == aux[z]) {
					x++;
					z++;
				}	
			}
		i++;
		}
		if (x == strlen(palavra)) printf("%s",aux);
	}
	
	return 0;
}
