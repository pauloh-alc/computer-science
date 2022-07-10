#include <stdio.h>

int main(){
	int ax,
		ay,
		bx,
		by,
		n,
		i,
		pontoX,
		pontoY;
		
	printf("Entre com as 'coordenadas' do ponto A (x,y): ");
	scanf("%d%d",&ax,&ay);
	
	printf("Entre com as coordenadas do vetor de deslocamento B (x,y): ");
	scanf("%d%d",&bx,&by);
	
	printf("Entre com a quantidade 'N' de pontos que voce deseja: ");
	scanf("%d",&n);
	
	pontoX = ax;
	pontoY = ay;
	
	for(i = 1; i <= n; i++){
		pontoX = pontoX + bx;
		pontoY = pontoY + by;
		printf("P%d = (%d,%d)",i,pontoX,pontoY);
		if(i < n) printf(", ");	
	}
	
return 0;
}
