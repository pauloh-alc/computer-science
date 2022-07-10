#include <stdio.h>

int main(){
	// Exercício 16 - propostos
	
	int idade, quantIdade;
	float media, somaI;
	
	quantIdade = 0;
	somaI = 0;
	do{
		printf("Idade >>> ");
		scanf("%d",&idade);
		somaI = somaI + idade;
		
		if(idade != 0) quantIdade++;
		
	}while(idade != 0);
	
	if(quantIdade > 0) media = somaI / quantIdade;
	printf("Media das idade = %f. \n", media);
return 0;
}
