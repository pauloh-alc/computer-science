#include <stdio.h>

int main ()
{
	// Dicionário de dados:
	int i, n;
	char string[50];
	char r[50];
	char letra;
		
	// Entrada de dados:
	printf("Entre com um string: ");
	scanf("%[^\n]s",string);
	
	fflush(stdin);
	printf("Digite a letra que voce deseja remover: ");
	scanf("%c",&letra);
	
	// Processamento: removendo letra da string
	n = 0;
	i = 0;
	while (string[i] != '\0') {
		if (string[i] != letra) { 
			r[n] = string[i];
		n++;	
		}
	i++;
	}
	r[n] = '\0';
	
	// Saída de dados: mostrando string
	n = 0;
	while (r[n] != '\0') {
		printf("%c",r[n]);
	n++;
	}
	return 0;
}
