#include <stdio.h>
#include <math.h>
int main(){
	// Exercício 14 -
	
	int codigo, quantidade;
	float preco_final_com_desconto, preco_total,desconto;
	
	printf("Entre com o CODIGO do produto >>> ");
	scanf("%d",&codigo);
	printf("Entre coma quantidade comprada >>>");
	scanf("%d",&quantidade);

	// Tabela I:

	if(codigo >= 1 && codigo <= 10 ){
		preco_total = quantidade * 10;
		printf("Preco unitario = 10 ");
	}
	else if(codigo >= 11 && codigo <= 20){
		preco_total = quantidade * 15;
		printf("Preco unitario = 15 ");
	}
	else if(codigo >= 21 && codigo <= 30){
		preco_total = quantidade * 20;
		printf("Preco unitario = 20 ");
	}
	else if(codigo >= 32 && codigo <= 40){
		preco_total = quantidade * 30;
		printf("Preco unitario = 30 ");
	}


	printf("\nPreco total = %.1f", preco_total);


	// Tabela II:

	if(preco_total <= 250){
		desconto = preco_total * 5.0 / 100;
	}
	else if(preco_total > 250 && preco_total <= 500){
		desconto = preco_total * 10.0 / 100;
	}
	else if(preco_total > 500){
		desconto = preco_total * 15.0 / 100;
	}
	
	printf("\nDesconto = %.1f.", desconto);
	preco_final_com_desconto = preco_total - desconto;
	printf("\nO preco total depois do desconto e = %.1f.", preco_final_com_desconto);
	
return 0;
}