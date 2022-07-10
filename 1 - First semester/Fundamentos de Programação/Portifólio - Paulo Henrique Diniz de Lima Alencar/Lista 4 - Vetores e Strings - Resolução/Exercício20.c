#include <stdio.h>

int main ()
{
	int i;
	char string[50];
	char letraAlvo;
	char letraSub;
	
	// Entrada de dados:
	printf("Entre com um string: ");
	scanf("%[^\n]s",string);
		fflush(stdin);
	printf("Digite a letra que voce deseja substituir: ");
	scanf("%c",&letraAlvo);
		fflush(stdin);
	printf("Digite a letra substituta: ");
	scanf("%c",&letraSub);
	
	i = 0;
	while (string[i] != '\0') {
		if (string[i] == letraAlvo) string[i] = letraSub;
	i++;
	}
	printf("resultado: %s \n",string);
	return 0;
}
