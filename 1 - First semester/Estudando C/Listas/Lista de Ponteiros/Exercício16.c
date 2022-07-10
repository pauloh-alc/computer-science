#include <stdio.h>
	void strcpY (char *destino, char *origem)
	{
		origem  = &origem[0];
		destino = &destino[0];
		
		while (*origem != '\0') {
			*destino = *origem;
			 origem  += 1;
			 destino += 1;
		}
		
		*destino = '\0'; 
	}
	
	void imprime (char *destino, char *origem)
	{
		char *i;
		
		for (i = destino; *i != '\0'; i++) {
			printf("%c",*i);
		}
		printf("\n");
		
	}
int main ()
{
	char origem [30];
	char destino[30];
	
	fflush(stdin);
	printf("String 'Origem': ");
	scanf("%[^\n]s",origem);
	
	strcpY  (destino, origem);
	imprime (destino, origem);
	return 0;
}
