#include <stdio.h>

int main(){
	// Exercício 18 - 

	int ax,ay,bx,by,cx,cy;

	printf("Entre com as coodenadas (x,y) do ponto A, respectivamente >>");
	scanf("%d %d", &ax, &ay);
	printf("Entre com as coodenadas (x,y) do ponto B, respectivamente >>");
	scanf("%d %d", &bx, &by);
	printf("Entre com as coodenadas (x,y) do ponto C, respectivamente >>");
	scanf("%d %d", &cx, &cy);

	if( by > ay && (bx - ax != by - ay) ){
		puts("FORMA UM RETANGULO.\n");
		if( (cx > ax && cx < bx) && (cy > ay && cy < by) ){
			puts("PONTO C ESTA DENTRO DO RETANGULO.");
		}
		else{
			puts("PONTO C NAO ESTA DENTRO DO RETANGULO.");
		}
	}
	else{
		puts("NAO FORMA UM RETANGULO.");
	}
return 0;
}