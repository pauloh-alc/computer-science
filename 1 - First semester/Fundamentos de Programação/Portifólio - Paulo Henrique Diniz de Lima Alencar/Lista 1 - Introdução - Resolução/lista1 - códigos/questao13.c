#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	// Descrição: Escreva um programa que leia a altura e o raio da base de um cilindro circular reto e escreva as
	//	      seguintes informações: área lateral, área da base e volume.
	// Dados de entrada: altura e raio da base de um cilindro.
	// Dados de saída: área lateral, área da base e volume.
	
	float altura, raio_base, comprimento_circunferencia, area_circunferencia, volume_cilindro;
	
	printf("Entre com a altura do cilindro >>");
		scanf("%f",&altura);
	printf("Entre com o raio da base do cilindro >>");
		scanf("%f",&raio_base);
	
	comprimento_circunferencia = 2*PI * raio_base;
	area_circunferencia = PI * pow(raio_base,2);
	volume_cilindro = area_circunferencia * altura;
	
	printf("A AREA LATERAL do cilindro e = %f.\n", comprimento_circunferencia);
	printf("A AREA DA BASE da circunferencia e = %f.\n", area_circunferencia);
	printf("O VOLUME do cilindro e = %f.\n", volume_cilindro);
} 