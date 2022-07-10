#include <stdio.h>
#include <math.h>

int main(){
	// Descrição: 18° - Faça um programa que leia um número inteiro positivo de 4 dígitos e imprima 1 dígito por
	//		    linha.
	// Dados de entrada: número inteiro positivo.
	// Dados de saída: Imprimir um dígito por linha.

	int numero, milhar, centena, dezena, unidade, resto;

	printf("Entre com um numero de 4 digitos >>");
		scanf("%d",&numero);

	milhar = numero / 1000;
	resto = numero % 1000;
	centena = resto / 100;
	resto = resto % 100;
	dezena = resto / 10;
	unidade = resto % 10;

	printf("%d\n", milhar);
	printf("%d\n", centena);
	printf("%d\n", dezena);
	printf("%d\n", unidade);
	return 0;
}