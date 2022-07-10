#include <stdio.h>

int main(){
	int x,
		y;
		
	printf("Entre com a coordenada 'x' e 'y' respecticamente (x,y): ");
	scanf("%d%d",&x,&y);
	
	if(x > 0 && y > 0) printf("Primeiro Quadrante.\n");
	else if(x < 0 && y > 0) printf("Segundo Quadrante.\n");
	else if(x < 0 && y < 0) printf("Terceiro Quadrante.\n");
	else if(x > 0 && y < 0) printf("Quarto Quadrante.\n");
	else if(x == 0 && y > 0) printf("Eixo das Ordenadas.\n");
	else printf("Eixo das abscissas.\n");
	
return 0;
}
