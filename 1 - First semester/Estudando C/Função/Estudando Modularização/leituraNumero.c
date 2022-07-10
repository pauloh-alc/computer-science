#include <stdio.h>

// Função sem lista de parêmetros

int leituraNumero(void){
	int x;
	
	printf("Digite um numero: ");
	scanf("%d",&x);
	
	return x; // O retorno dessa função é do tipo 'int'
}

int main(){
	printf("%d",leituraNumero());
return 0;
}
