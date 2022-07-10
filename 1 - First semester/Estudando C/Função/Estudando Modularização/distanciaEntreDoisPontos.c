#include <stdio.h>
#include <math.h>

/*
	Funcao: Calcular a distancia entre dois pontos no plano cartesiano.
	Dados de entrada:
		x1: coordenada x do primeiro ponto
		y1: coordenada y do primeiro ponto
		x2: coordenada x do segundo ponto
		y2: coordenada y do segundo ponto
	Dados de saida:
		distancia entre os pontos passados

*/

float distancia(float x1, float y1, float x2, float y2){
	float dx,    // distancia horizontal entre os pontos
	      dy,    // distancia vertical entre os pontos
		  dist;  // distancia euclediana entre os pontos
	
	dx = x2 - x1;
	dy = y2 - y1;
	dist = sqrt(dx * dx + dy * dy);
	
	return dist;
}

int main(){
	float xa, xb, ya, yb, dist;
	
	printf("Coordenadas x e y (em KM) das cidades:");
	scanf("%f%f%f%f",&xa,&ya,&xb,&yb);
	dist = distancia(xa,ya,xb,yb);
	printf("Distancia (KM) entre as cidade: %f \n",dist);
	
	printf("Coordenadas x e y (metros) dos moveis:");
	scanf("%f%f%f%f",&xa,&ya,&xb,&yb);
	dist = distancia(xa,ya,xb,yb);
	printf("Distancia (metros) entre os moveis: %f \n",dist);
	
	printf("Distancia igual: %f\n",distancia(5,6,1,2));
	
return 0;
}
