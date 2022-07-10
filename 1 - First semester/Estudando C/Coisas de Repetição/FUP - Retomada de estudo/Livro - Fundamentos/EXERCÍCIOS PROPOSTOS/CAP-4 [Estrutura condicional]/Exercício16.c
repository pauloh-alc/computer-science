#include <stdio.h>

int main(){
	float preco, novoPreco;
	int codigo;
	printf("Entre com 'preco' de um produto: ");
	scanf("%f",&preco);
	printf("Entre com o 'codigo do produto':");
	scanf("%d",&codigo);
	
	if(preco <= 30){
		novoPreco = preco;
		printf("Sem desconto.\nPreco do produto %d continua %.2f.\n",codigo,preco);	
	} 
	else if(preco > 30 && preco <= 100){
		novoPreco = preco - preco * 10 / 100;
		printf("Desconto de 10%%.\nPreco do produto %d com desconto fica %.2f.\n",codigo,novoPreco);	
	}
	else{
		novoPreco = preco - preco * 15 / 100;
		printf("Desconto de 15%%.\nPreco do produto %d com desconto fica %.2f.\n",codigo,novoPreco);	
	}
return 0;
}
