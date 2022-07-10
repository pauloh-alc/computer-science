#include <stdio.h>

int main(){
	
	int n,
		i,
		x,
		y,
		MaiorX,
		MaiorY,
		MenorX,
		MenorY,
		MaxX,
		MaxY,
		MinX,
		MinY;
		
	printf("Entre com a quantidade 'N' de pontos que voce deseja colocar: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		
		printf("Entre com o 'Ponto %d' (x,y): ",i);
		scanf("%d%d",&x,&y);
		
		if(i == 1){
			MaiorX = x;
			MaiorY = y;
			
			MenorX = x;
			MenorY = y;	
		}
		
		if(x > MaiorX) MaiorX = x;
		if(y > MaiorY) MaiorY = y;
		
		if(x < MenorX) MenorX = x;
		if(y < MenorY) MenorY = y;
		
	}
	
	MaxX = MaiorX;
	MaxY = MaiorY;
	
	MinX = MenorX;
	MinY = MenorY;
	
	printf("Max (%d,%d).\n",MaxX,MaxY);
	printf("Min (%d,%d).\n",MinX,MinY);

return 0;
}
