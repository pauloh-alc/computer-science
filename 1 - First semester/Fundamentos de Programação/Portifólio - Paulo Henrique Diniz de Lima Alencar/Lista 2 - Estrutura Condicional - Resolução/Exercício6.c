#include <stdio.h>

int main(){
	// Exercício 6 -

	float media;

	printf("Entre com uma media >>");
	scanf("%f", &media);
	
	if(media >= 8 && media <= 10){
		printf("A");
	}
	else if(media >= 7 && media < 8){
		printf("B");
	}
	else if(media >= 6 && media < 7){
		printf("C");
	}
	else if(media >= 5 && media < 6){
		printf("D");
	}
	else if(media >= 0 && media < 5){
		printf("E");
	}

return 0;

}