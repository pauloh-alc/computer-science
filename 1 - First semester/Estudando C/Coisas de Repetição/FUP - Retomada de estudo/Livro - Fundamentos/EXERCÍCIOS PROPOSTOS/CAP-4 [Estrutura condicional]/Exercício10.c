#include <stdio.h>

int main(){
	
	float precoConsumidor,
		  custoFabrica;
		  
	printf("Entre com o valor do custo de fabrica do carro: ");
	scanf("%f",&custoFabrica);
	
	if(custoFabrica <= 12000){
		precoConsumidor = custoFabrica + custoFabrica * 5 / 100;
	}
	else if(custoFabrica > 12000 && custoFabrica <= 25000){
		precoConsumidor = custoFabrica + custoFabrica * 10 / 100 + custoFabrica * 15 / 100;
	}
	else if(custoFabrica > 25000){
		precoConsumidor = custoFabrica + custoFabrica * 15 / 100 + custoFabrica * 20 / 100;
	}
	
	printf("Preco ao consumidor e: %.2f\n", precoConsumidor);
return 0;
}
