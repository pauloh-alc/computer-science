#include <stdio.h>

int main(){
	int a,
		b,
		c;
		
	printf("Entre com o valor A: ");
	scanf("%d",&a);
	printf("Entre com o valor B: ");
	scanf("%d",&b);
	printf("Entre com o valor C: ");
	scanf("%d",&c);
	
	if(a >= b + c || b >= a + c || c >= b + a){
		printf("Erro: valores digitados nao podem forma um triangulo !!");
	}
	else{
		printf("Verificao concluida: e Triangulo.\n");
		if(a == b && b == c){
			printf("TRI - equilatero.");
		}
		else if(a == b || a == c || b == c){
			printf("TRI - isosceles.");
		}
		else{
			printf("TRI - escaleno.");
		}
	}
return 0;
}
