#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Entre com um 'numero' para saber se e impar/par: ");
	scanf("%d",&numero);
	
	if(!(numero % 2)) printf("Numero '%d' - PAR.\n",numero);
	else printf("Numero '%d' - IMPAR.\n",numero);
	
return 0;
}
