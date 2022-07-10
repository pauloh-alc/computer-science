#include <stdio.h>
#include <math.h>

int main(){
	
	float numero, parteFracionaria, numeroArredondado;
	int parteInteira;
	
	printf("Entre com um numero 'Real': ");
	scanf("%f",&numero);
	
	parteInteira = numero;
	printf("Parte inteira do numero %f e >> %d.\n",numero, parteInteira);
	
	parteFracionaria = numero - parteInteira;
	printf("Parte fracionaria do numero %f e >> %.3f.\n",numero, parteFracionaria);
	
	numeroArredondado = ceil(numero);
	printf("O arredondamento do numero %f e >> %.2f.\n", numero, numeroArredondado);
	
return 0;
}
