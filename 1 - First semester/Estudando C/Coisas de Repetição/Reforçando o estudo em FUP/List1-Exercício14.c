#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 14 da list 1 -
	
	int x, y;
	float distancia;
	
	
	printf("Entre com uma coodenarda (x,y) >>>");
	scanf("%d %d",&x, &y);
	
	distancia = sqrt(pow(x,2) + pow(y,2));
	
	printf("Distancia do seu ponto ate a ORIGEM (0,0) e = %.1f.\n", distancia);
	
return 0;
}
