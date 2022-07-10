#include <stdio.h>

int main(){
	
	int idade;
	float peso;
	
	printf("Entre com a 'idade' da pessoa: ");
	scanf("%d",&idade);
	printf("Entre com o 'peso' da pessoa: ");
	scanf("%f",&peso);
	
	if(idade < 20){
		if(peso <= 60) printf("Grupo de risco - 9.\n");
		else if(peso > 60 && peso <= 90) printf("Grupo de risco - 8.\n");
		else printf("Grupo de risco - 7.\n");
	}
	else if(idade >= 20 && idade <= 50){
		if(peso <= 60) printf("Grupo de risco - 6.\n");
		else if(peso > 60 && peso <= 90) printf("Grupo de risco - 5.\n");
		else printf("Grupo de risco - 4.\n");
	}
	else{
		if(peso <= 60) printf("Grupo de risco - 3.\n");
		else if(peso > 60 && peso <= 90) printf("Grupo de risco - 2.\n");
		else printf("Grupo de risco - 1.\n");
	}
	
return 0;
}
