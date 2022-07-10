#include <stdio.h>

int main(){
	
	int codigo,
		quantidade,
		precoUnitario;
		
	float precoNota, precoFinal;
	
	printf("Entre com o 'codigo do produto' comprado: ");
	scanf("%d",&codigo);
	printf("Entre com a 'quantidade' comprada do produto: ");
	scanf("%d",&quantidade);
	
	if(codigo >= 1 && codigo <= 10){
		precoUnitario = 10;
		precoNota = quantidade * precoUnitario;
	}
	else if(codigo >= 11 && codigo <= 20){
		precoUnitario = 15;
		precoNota = quantidade * precoUnitario;
	}
	else if(codigo >= 21 && codigo <= 30){
		precoUnitario = 20;
		precoNota = quantidade * precoUnitario;
	}
	else if(codigo >= 31 && codigo <= 40){
		precoUnitario = 30;
		precoNota = quantidade * precoUnitario;
	}
	else{
		printf("Erro: codigo digitado invalido !!\n");
	}
	
	if(precoNota <= 250){
		printf("Desconto - 5%%.\n");
		precoFinal = precoNota - precoNota * 5 / 100;
		printf("Preco Final da nota depois do desconto: %.2f.\n",precoFinal);
	}
	else if(precoNota > 250 && precoNota <= 500){
		printf("Desconto - 10%%.\n");
		precoFinal = precoNota - precoNota * 10 / 100;
		printf("Preco Final da nota depois do desconto: %.2f.\n",precoFinal);
	}
	else{
		printf("Desconto - 15%%.\n");
		precoFinal = precoNota - precoNota * 15 / 100;
		printf("Preco Final da nota depois do desconto: %.2f.\n",precoFinal);
	}
return 0;
}
