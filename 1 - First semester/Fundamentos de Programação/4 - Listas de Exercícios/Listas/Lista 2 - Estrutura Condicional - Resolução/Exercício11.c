#include <stdio.h>

int main(){
	// Exercício 11 -
	
	int a,b,c;
	
	printf("Entre com o valor de A >>> ");
	scanf("%d",&a);	
	printf("Entre com o valor de B >>> ");
	scanf("%d",&b);
	printf("Entre com o valor de C >>> ");
	scanf("%d",&c);
	
	if( c < (a+b)  && b < (a+c) && a < (b+c) ){
		printf("Verificacao ocorrida: E um triangulo.");
		if(a == b && b == c ){
			printf("\nE um tringulo EQUILATERO.");
		}
		else if(a == b || a == c || b == c){
			printf("\nE um triangulo ISOSCELES. ");
		}
		else if(a != b && b != c && c != a){
			printf("\nE um triangulo ESCALENO. ");
		}

		
	}
	else{
		printf("\nO valores digitados NAO SAO VALIDOS,nao atende a verificacao.");
	}

return 0;
}