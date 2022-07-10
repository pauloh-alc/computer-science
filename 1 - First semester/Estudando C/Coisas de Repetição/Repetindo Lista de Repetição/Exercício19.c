#include <stdio.h>

int main(){
		// Exercício 19
		int i, torreX, torreY, y, x;
		
		printf("Entre com a coordenada da sua torre (x,y) respectivamente >>> ");
		scanf("%d%d",&torreX, &torreY);
		
		for(i = 1; i <= 8; i++){
			y = i;
			if(i != torreY) printf("(%d,%d)",torreX,y);
		}
		printf("\n");
		for(i = 1; i <= 8; i++){
			x = i;
			if(i != torreX) printf("(%d,%d)",x,torreY);
		}
return 0;
}
