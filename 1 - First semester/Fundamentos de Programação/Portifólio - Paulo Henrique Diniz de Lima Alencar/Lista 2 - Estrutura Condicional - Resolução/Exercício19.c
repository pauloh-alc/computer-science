#include <stdio.h>

int main(){
	// Exercício 19 -
	
	
	int ax,ay,bx,by,cx,cy;
	int largura, altura;

	printf("Entre com as coodenadas (x,y) do ponto A, respectivamente >>");
	scanf("%d %d", &ax, &ay);
	printf("Entre com as coodenadas (x,y) do ponto B, respectivamente >>");
	scanf("%d %d", &bx, &by);
	printf("Entre com as coodenadas (x,y) do ponto C, respectivamente >>");
	scanf("%d %d", &cx, &cy);
	
	// Largura: 
	if(ax >= bx && ax >= cx && bx >= cx){
		largura = ax - cx;
	}
	else if(ax >= bx && ax >= cx && cx >= bx){
		largura = ax - bx;
	}
	else if(bx >= ax && bx >= cx && ax >= cx){
		largura = bx - cx;
	}
	else if(bx >= ax && bx >= cx && cx >= ax){
		largura = bx - ax;
	}
	else if(cx >= ax && cx >= bx && ax >= bx){
		largura = cx - bx;
	}
	else if(cx >= ax && cx >= bx && bx >= ax){
		largura = cx - ax;
	}
	// Altura:
	if(ay >= by && ay >= cy && by >= cy){
		altura = ay - cy;
	}
	else if(ay >= by && ay >= cy && cy >= by){
		altura = ay - by;
	}
	else if(by >= ay && by >= cy && ay >= cy){
		altura = by - cy;
	}
	else if(by >= ay && by >= cy && cy >= ay){
		altura= by - ay;
	}
	else if(cy >= ay && cy >= by && ay >= by){
		altura = cy - by;
	}
	else if(cy >= ay && cy >= by && by >= ay){
		altura = cy - ay;
	}

	printf("Largura = %d.\n",largura);
	printf("Altura = %d.\n",altura);
return 0;
}
