#include <stdio.h>

int main(){
	// Exercício 7 -
	
	char c;
	
	printf("Entre com uma caractere >> ");
	scanf("%c",&c);
	
	if( (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')    ||   (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')){
		printf("O caractere digitado (%c) e uma vogal.",c);
	}
	else{
		printf("O caractere digitado (%c) NAO E uma vogal.",c);
	}
	
return 0;

}