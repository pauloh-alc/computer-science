#include <stdio.h>
#include <math.h>

int main(){
	// Descrição: 19° - Faça um programa que leia um número inteiro positivo de três dígitos e imprima o número
	//	      formado pelos dígitos invertidos do número lido. Ex: Número lido = 123 ? Número escrito = 321.
	// Dados de entrada: número inteiro de 3 digitos.
	// Dados de saída: número inteiro invertido.
	
	int numero, dezenas, centenas, resto, unidades;
	printf("Entre com um numero inteiro positivo de 3 digitos >>");
		scanf("%d", &numero);
	centenas = numero / 100;
	resto = numero % 100;
	dezenas = resto / 10;
	unidades = resto % 10;
		
	printf("O numero invertido fica >> %d%d%d", unidades,dezenas,centenas);
	return 0;
}