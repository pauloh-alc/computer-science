#include <stdio.h>
	void minhaStrcpy (char *destino, char *origem)
	{
		char *i;
		
		for (i = &origem[0]; *i != '\0'; i++) {
			*destino = *i;
			destino++;
		}
		*destino = '\0';
	}
int main ()
{
	char copia[30];
	int i;
	
	// Realizando cópia:
	minhaStrcpy (copia, "Paulo Alencar");
	
	// Exibindo cópia:
	
	i = 0;
	while (copia[i] != '\0') {
		printf("%c",copia[i]);
		i++;
	}
	
	return 0;
	
}
