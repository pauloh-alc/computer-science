#include <stdio.h>

int main(){
	// Descrição: 5° - Crie um programa que permita fazer a conversão cambial entre Dólares e Reais. Considere como
	//		   taxa de câmbio US$ 1,00 = R$ 3,92. Leia um valor em Dólares pelo teclado e mostre o
	//		   correspondente em Reais.
	// Dados de entrada: Valor em dólares.
	// Dados de saída: Valor em reais.

	float valor_dolar;
	float valor_reais;
	
	printf("\t Converte dolares em reais:\n\n");
	printf("Entre com o valor em dolares >> ");
		scanf("%f",&valor_dolar);
	printf("\n");
	valor_reais = valor_dolar * 3.92;
	
	printf("%.2f DOLARES Corresponde a: %.2f REAIS.\n",valor_dolar, valor_reais);
	
	return 0;

}