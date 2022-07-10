#include <stdio.h>

int main(){
	// Exercício 19 - 
	
	int torreX, torreY, x, y;
	int i;
	
	printf("Entre com a cooordenada (x,y) da sua torre respectivamente >>> ");
	scanf("%d %d",&torreX, &torreY);
	
	for(i = 1; i <= 8; i++){
		y = i;                       
		if(y != torreY) printf("(%d,%d),", torreX, y);
	}
	
	for(i = 1; i <= 8; i++){
		x = i;
		if(x != torreX) printf("(%d,%d),", x, torreY);
	}

return 0;
}
