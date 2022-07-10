#include <stdio.h>

int main ()
{
	// Dicionário de dados:
	char senha[100];
	int i, caractereEspecial = 0, letra = 0, numero = 0, codigoASCII;
	
	// Entrada de dados:
	printf("Entre com uma senha: ");
	scanf("%[^\n]s",senha);
	
	// Processamento:
	i = 0;
	while (senha[i] != '\0') {
		codigoASCII = senha[i];
		
		// Utilizando valores da tabela ASCII:
		if ((codigoASCII >= 33 && codigoASCII <= 47) || (codigoASCII >= 58 && codigoASCII <= 64) || 
		    (codigoASCII >= 91 && codigoASCII <= 96) || (codigoASCII >= 123 && codigoASCII <= 126)) {
		    	caractereEspecial = 1;
		}
		if ((codigoASCII >= 65 && codigoASCII <= 90) || (codigoASCII >= 97 && codigoASCII <= 122)) {
			letra = 1;
		}
		if ((codigoASCII >= 48 && codigoASCII <= 57)) {
			numero = 1;
		}
	i++;
	}
	
	// Saída de dados:
	if      (caractereEspecial == 1 && letra == 1 && numero == 1)                                                        printf("Senha forte ! \n");
	else if (caractereEspecial == 1 && letra == 1 || caractereEspecial == 1 && numero == 1 || letra == 1 && numero == 1) printf("Senha media ! \n");
	else 														                                                         printf("Senha fraca ! \n");
	return 0;
}
