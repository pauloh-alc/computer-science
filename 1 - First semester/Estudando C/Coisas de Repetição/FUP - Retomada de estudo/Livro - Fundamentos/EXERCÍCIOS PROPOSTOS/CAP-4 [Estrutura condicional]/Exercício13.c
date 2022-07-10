#include <stdio.h>

int main(){
	
	float preco,
		  precoNovo;
		  
	printf("Entre com o 'preco' de um produto: ");
	scanf("%f",&preco);
	
	if(preco <= 50){
		precoNovo = preco + preco * 5 / 100;
	}
	else if(preco > 50 && preco <= 100){
		precoNovo = preco + preco * 10 / 100;
	}
	else if(preco > 100){
		precoNovo = preco + preco * 15 / 100;
	}
	
	printf("Novo preco e: %.2f.\n",precoNovo);
	if(precoNovo <= 80) printf("BAROTO.\n");
	else if(precoNovo > 80 && precoNovo <= 120) printf("NORMAL.\n");
	else if(precoNovo > 120 && precoNovo <= 200) printf("CARO.\n");
	else if(precoNovo > 200) printf("MUITO CARO.\n");
	
return 0;
}
