#include <stdio.h>
#include <math.h>

int main(){
	// Descrição: 16° - O imposto brasileiro sobre acessórios de video-games é de 40%. Escreva um programa que leia
	//	      o valor de um acessório e retorne a quantia repassada ao governo por imposto.
	// Dados de entrada: Valor do acessório.
	// Dados de saída: quantia repassada para o governo por imposto.
	
	float valor, imposto;

	printf("Entre com o valor de um Acessorio >>");
		scanf("%f",&valor);
	
	imposto = valor * 40/100;

	printf("O valor repassado para o governo por IMPOSTOS E = %.3f.\n",imposto);
	return 0;

}