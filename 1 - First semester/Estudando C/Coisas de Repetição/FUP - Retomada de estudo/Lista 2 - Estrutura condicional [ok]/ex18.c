#include <stdio.h>

int main(){
	int xa,
		xb,
		xc,
		ya,
		yb,
		yc;
		
	printf("Entre com o ponto A (x,y): ");
	scanf("%d%d",&xa,&ya);
	
	printf("Entre com o ponto B (x,y): ");
	scanf("%d%d",&xb,&yb);
	
	printf("Entre com o ponto C (x,y): ");
	scanf("%d%d",&xc,&yc);
	
	if((xa < xb && ya < yb) && (yb - ya != xb - xa)){
		printf("Os pontos A e B formam um retangulo !!\n");
		if(xc >= xa && xc <= xb && yc >= ya && yc <= yb){
			printf("Ponto C faz parte do rentagulo !!");
		}
		else{
			printf("Ponto C nao faz parte do retangulo !!");
		}
	}
	else{
		printf("Os pontos A e B nao formam um retangulo !!\n");
	}
	
return 0;
}
