#include <stdio.h>

int main(){
	
	int xTorre,
		yTorre,
		x,
		y,
		i;
		
	printf("Entre com as coordenadas (x,y) da Torre: ");
	scanf("%d%d",&xTorre,&yTorre);
	
	for(i = 1; i <= 8; i++){ //			xTorre estático.
		y = i;
		if(y != yTorre){
			printf("(%d,%d)",xTorre,y);
			if(i <= 8) printf(", ");
		}
	}
	
	for(i = 1; i <= 8; i++){ // 		yTorre estático.
		x = i;
		if(x != xTorre){
			printf("(%d,%d)",x,yTorre);
			if(i < 8) printf(", ");
		}
	}
	

return 0;
}
