#include <stdio.h>

int main(){
	int numero, contador,i, resto;
	
	puts("Digite um numero inteiro e positivo >>>");
	scanf("%d",&numero);
	
	contador = 0;
	for(i = 1; i <= numero; i++){
		 resto = numero % i;
		 if(resto == 0){
		 	contador += 1; 
		 } 
	}
	
	if(contador == 2){
		printf("%d e primo.", numero);
	}
	else{
		printf("%d nao e primo.", numero);
	}
	
	return 0;
}
