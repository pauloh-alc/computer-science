#include <stdio.h>

int main(){
	// Exercício 21 -
	
	int N, i;
	int x,y;
	int maiorX, menorX, maiorY, menorY;
	int MinX, MinY;
	int MaxX, MaxY;
	
	printf("Entre com a quantidade N de pontos que você quer inserir >>>");
	scanf("%d",&N);
	printf("\n");
	
	for(i = 1; i <= N; i++){
		printf("%d- Ponto (x,y) respectivamente >>>",i);
		scanf("%d%d",&x,&y);
		if(i == 1){ 
			maiorX = x;
			menorX = x;
			
			maiorY = y;
			menorY = y;
		}
		
		if(x > maiorX) maiorX = x;
		if(x < menorX) menorX = y;
		
		if(y > maiorY) maiorY = y;
		if(y < menorY) menorY = y;
		
		if(i == N){
			MinX = menorX;
			MinY = menorY;
			
			MaxX = maiorX;
			MaxY = maiorY;
		}
	}
	
	printf("Coodenada de Min(%d,%d).\n", MinX, MinY);
	printf("Coodenada de Max(%d,%d).\n", MaxX, MaxY);
	
	

return 0;
}
