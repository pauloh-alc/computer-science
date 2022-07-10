#include <stdio.h>

int main(){
	// Exercício 22
	
	int ax, ay, bx, by, px, py, N, i;
	
	printf("Entre com as coordenadas do ponto A(x,y) respectivamente >>>");
	scanf("%d%d",&ax,&ay);
	
	printf("Entre com as coordenadas do ponto B(x,y) respectivamente >>>");
	scanf("%d%d",&bx,&by);
	
	printf("Entre com a quantidade 'N' de potnos que voce deseja mostrar >>> ");
	scanf("%d",&N);
	
	px = ax;
	py = ay;
	
	for(i = 1; i <= N; i++){
		px = px + bx;
		py = py + by;
		printf("P%d(%d, %d)", i, px, py);
		if(i < N) printf(", ");
	}

return 0;
}
