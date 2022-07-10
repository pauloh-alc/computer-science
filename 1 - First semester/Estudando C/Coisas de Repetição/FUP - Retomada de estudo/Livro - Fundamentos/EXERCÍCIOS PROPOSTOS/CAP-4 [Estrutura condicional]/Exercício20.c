#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Entre com a 'idade do nadador': ");
	scanf("%d",&idade);
	
	if(idade < 5){
		printf("Idade menor que 5.\n");
	}
	else if(idade >= 5 && idade <= 7){
		printf("Infantil.\n");
	}
	else if(idade >= 8 && idade <= 10){
		printf("Juvenil.\n");
	}
	else if(idade >= 11 && idade <= 15){
		printf("Adolescente.\n");
	}
	else if(idade >= 16 && idade <= 30){
		printf("Adulto.\n");
	}
	else{
		printf("Senior.\n");
	}
return 0;
}
