#include <stdio.h>

int main(){
	// Exercício 17 - 

	int x,y;
	
	printf("Entre com as coodenadas (x,y) respectivamente >>");
	scanf("%d %d", &x, &y);
	
	if(x > 0 && y > 0){	
		printf("PRIMEIRO QUADRANTE.");
	}
	else if(x > 0 && y < 0){
		printf("QUARTO QUADRANTE.");
	}
	else if(x < 0 && y > 0){
		printf("SEGUNDO QUADRANTE.");
	}
	else if(x < 0 && y < 0){
		printf("TERCEIRO QUADRANTE");
	}
	else{
		printf("O PONTO ESTA NA OTIGEM (0,0).");
	}
return 0;
}
