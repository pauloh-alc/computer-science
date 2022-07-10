#include <stdio.h>

int main(){
	// Descrição: 7° - Escreva um programa que leia os lados de um retângulo e retorne a sua área.
	// Dados de entrada: Lados de um retângulo.
	// Dados de saída: Área de um retângulo.
	
	float base, altura, area;	
	
	printf("\t Calcula AREA de um retangulo:\n");
	
	printf("Digite o valor da base do retangulo >>");
		scanf("%f",&base);
	printf("Digite a altura do retangulo >>");
		scanf("%f",&altura);
	
	area = base * altura;
	
	printf("\nA AREA do retangulo eh: %.2f. \n\n", area);
	return 0;

}