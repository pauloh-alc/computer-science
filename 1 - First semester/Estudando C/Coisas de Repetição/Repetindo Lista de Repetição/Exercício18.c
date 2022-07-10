#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 18
	int binario, decimal, expoente, div, resto;
	
	printf("Entre com um numero binario >>> ");
	scanf("%d", &binario);
	
	decimal = 0;
	expoente = 0;
	div = binario;
	do{
		resto = div % 10;
		decimal = decimal + (pow(2,expoente) * resto);
		expoente++;
		div = div / 10;
	}while(div > 0);
	printf("O %d corresponde ao numero decimal [%d].\n ", binario, decimal);
return 0;
}
