#include <stdio.h>

int main(){
	// Exercício 21
	int N, i, x, y, maiorX, maiorY, menorX, menorY, MinX, MinY, MaxX, MaxY;
	
	printf("Entre com uma quantidade 'N' de pontos >>> ");
	scanf("%d",&N);
	
	for(i = 1; i <= N; i++){
		printf("Entre com ponto [%d] (x, y) respectivamente >>>",i);
		scanf("%d%d",&x,&y);
		
		if(i == 1){
			maiorX = x;
			maiorY = y;
			
			menorX = x;
			menorY = y;
		}
		
		if(x > maiorX) maiorX = x;
		if(y > maiorY) maiorY = y;
		
		if(x < menorX) menorY = x;
		if(y < menorY) menorY = y;
		
		if(i == N){
			MaxX = maiorX;
			MaxY = maiorY;
			
			MinX = menorX;
			MinY = menorY;
		}
	}
	
	printf("Max(%d,%d).\n",MaxX, MaxY);
	printf("Min(%d,%d).\n",MinX, MinY);

return 0;
}
