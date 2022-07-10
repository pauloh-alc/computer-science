#include <stdio.h>
#include <math.h>

int main(){
	// Descrição: 15° - Escreva um programa que leia as coordenadas de dois pontos e retorne a distância entre eles.
	// Dados de entrada: dois pontos. 
	// Dados de saída: distância entre esses pontos.
	
	float distancia, x1,x2,y1,y2, variacao_y, variacao_x;

	printf("Entre com os valores do ponto A (x,y) respectivamente >>");
		scanf("%f %f", &x1, &y1);
	printf("Entre com os valores do ponto B (x,y) respectivamente >>");
		scanf("%f %f", &x2, &y2);

	variacao_y = y2 - y1;
	variacao_x = x2 - x1;
	
	distancia = sqrt(pow(variacao_y, 2) + pow(variacao_x, 2));
	
	printf("A DISTANCIA entre o ponto A e o ponto B e = %f.\n",distancia);
	
}