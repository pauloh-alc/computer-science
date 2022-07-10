#include <stdio.h>

int main ()
{
	// Dicionário de dados:
	char string[50];
	int i;
	
	// Entrada de dados:
	printf("Entre com uma string: ");
	scanf("%[^\n]s",string);
	
	// Processamento e escrita:
	i = 0;
	while (string[i] != '\0') {
		printf("%c",string[i]);
	i++;
	}
	return 0;
}
