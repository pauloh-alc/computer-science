#include <stdio.h>
#include <math.h>
int main(){
	// Exercício 13 -
	char nome1[20], nome2[20];
	float gramas1, gramas2;
	float preco1, preco2;
	
	printf("Entre com o nome do produto VERSAO 1 >>");
	scanf("%s",nome1);
	printf("Entre com as GRAMAS de um determinado produto VERSAO 1 >>");
	scanf("%f",&gramas1);
	printf("Entre com o PRECO desse produto VERSAO 1 >>");
	scanf("%f",&preco1);
	
	printf("Entre com o nome do produto VERSAO 1 >>");
	scanf("%s",nome2);
	printf("Entre com as GRAMAS da VERSAO 2 do produto anterior >>");
	scanf("%f",&gramas2);
	printf("Entre com o PRECO da VERSAO 2 do produto anterior >>");
	scanf("%f",&preco2);

	if( ((gramas2 / gramas1) * preco1) < preco2 ){
		printf("Produto %s (%.1f gramas, preco igual a %.1f ) e mais vantajoso do que o %s",nome1, gramas1, preco1, nome2);
	}
	else if( ((gramas2 / gramas1) * preco1) > preco2 ){
		printf("Produto %s (%.1f gramas, preco igual a %.1f ) e mais vantajoso do que %s",nome2, gramas2, preco2, nome1);
	}
	else{
		printf("Tanto faz adquirir o VERSAO 1 OU VERSAO 2.");
	}
	// OU
	/*
	if( (gramas1 / preco1) > (gramas2 / preco2 )){
		printf("Produto VERSAO 1 (%.1f gramas, preco igual a %.1f ) e mais vantajoso", gramas1, preco1);
	}
	else if( (gramas1 / preco1) < (gramas2 / preco2 )){
		printf("Produto VERSAO 2 (%.1f gramas, preco igual a %.1f ) e mais vantajoso", gramas2, preco2);
	}
	else{
			printf("Tanto faz adquirir o VERSAO 1 OU VERSAO 2.");
	}
	*/	
		
return 0;
}
