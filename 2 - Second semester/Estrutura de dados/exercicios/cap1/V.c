#include <stdio.h>
#include <stdlib.h>

typedef struct ImoveisDaRua{
	char *complemento;
	char imovelComercial;
	int numero;
	struct ImoveisDaRua *prox;
} IDR;

int main (void) {
	IDR *casa342       = malloc (sizeof(IDR));
	IDR *apartamento17 = malloc (sizeof(IDR));
	IDR *mercantil1    = malloc (sizeof(IDR));
	
	casa342 -> imovelComercial = 'N';
	casa342 -> complemento = "Casa, 284 metros quadrados";
	casa342 -> numero = 1;
	
	apartamento17 -> imovelComercial = 'N';
	apartamento17 -> complemento = "Predio, 4 andares, 182 metros quadrados";
	apartamento17 -> numero = 17;
	
	mercantil1 -> imovelComercial = 'S';
	mercantil1 -> complemento = "Casa Comercial, 521 metros quadrados";
	mercantil1 -> numero = 1;
	

	casa342 -> prox = apartamento17;
	apartamento17 -> prox = mercantil1;
	mercantil1 -> prox = NULL;
	
	IDR *i;
	i = casa342;
	
	printf("INICIO\n");
	while (i != NULL) {
		printf("Imóvel Comercial: [%c]\n", i -> imovelComercial);
		printf("Complemento.....: %s  \n", i -> complemento);
		printf("Número..........: %d  \n", i -> numero);
		printf("\n");
	i = i -> prox;
	}
	printf("\nFIM\n");
	return 0;
}
