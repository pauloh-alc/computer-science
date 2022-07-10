#include <stdio.h>

int main(){
	// Exercício 11 -
	
	int i, termo, razao, valorInicial, quant;
	
	printf("Entre com o 'valor inicial' da sua PA >>> ");
	scanf("%d",&valorInicial);
	
	printf("Entre com o valor da 'razao' da sua PA >>> ");
	scanf("%d",&razao);
	
	printf("Entre com a quantidade de elementos da sua PA >>> ");
	scanf("%d",&quant);
	
	termo = valorInicial;
	for(i = 1; i <= quant; i++){
		printf("%d",termo);
		if(i < quant) printf(", ");
		termo = termo + razao;
	}
	
	
return 0;
}	
