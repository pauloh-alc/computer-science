#include <stdio.h>

int main(){
	// Exercício 22 -
	
	int ax,ay;
	int bx,by;
	int N;
	int px,py;
	int i;
	
	printf("Entre com um ponto A(x,y) respectivamente >>> ");
	scanf("%d%d",&ax,&ay);
	
	printf("Entre com as coordenadas (x,y) de um vetor de deslocamento B >>> ");
	scanf("%d%d",&bx,&by);
	
	printf("Agora entre com uma quantidade N para os pontos >>> ");
	scanf("%d",&N);
	px = ax;
	py = ay;
	printf("\n");
	for(i = 1; i <= N; i++){
		px = px + bx;
		py = py + by;
		printf(" P%d(%d,%d)",i,px,py);
		if(i < N) printf(",");
	}
	

return 0;
}
