#include <stdio.h>
	// Função: responsável por calcular a quantidade de caracteres em uma string.
	int strlen (char *s)
	{
		char *i;
		int cont = 0;
		
		for (i = s; *i != '\0'; i++) {
			cont += 1; 
		}
	return cont;
	}

int main ()
{	
	char s[50];
	
	// Entrada de dados	
	printf("Entre com um string qualquer: ");
	fflush(stdin);
	scanf("%[^\n]s",s);
	
	// Chamada da função e 
	int qtd = strlen(s);
	printf("Quantidade de caracteres da string digitada e: %d \n",qtd);
	
	return 0;
}
