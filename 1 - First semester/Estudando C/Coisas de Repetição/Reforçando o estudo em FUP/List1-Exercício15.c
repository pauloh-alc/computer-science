#include <stdio.h>
#include <math.h>

int main(){
	// Exercício 15 da list 1 -
	
	int x1, y1, x2, y2;
	int cateto1, cateto2;
	float distancia;
	
	
	printf("Entre com coodenarda do ponto A (x,y) >>>");
	scanf("%d %d",&x1, &y1);
	printf("Entre com coodenarda do ponto B (x,y) >>>");
	scanf("%d %d",&x2, &y2);
	
	cateto1 = x2 - x1;
	cateto2 = y2 - y1;
	
	distancia = sqrt(pow(cateto1, 2) + pow(cateto2,2));
	printf("Distancia do ponto A (%d,%d) ate o ponto B (%d,%d) e = %.1f.\n",x1,y1,x2,y2, distancia);
	
	
return 0;
}
