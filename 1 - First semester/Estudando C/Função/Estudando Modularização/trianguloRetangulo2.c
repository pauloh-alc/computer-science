#include <stdio.h>

int trianguloRetangulo(int a, int b, int c){
	int aux;
	
	if(b > a){
		aux = a;
		a = b;
		b = aux;
	}
	if(c > a){
		aux = a;
		a = c;
		c = aux;
	}
	if(a*a == b*b + c*c){
		return 1;
	}
	return 0;
}

int main(){
	int a,
		b,
		c;
		
	printf("Entre com 3 valores de um triangulo respectivamente: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",trianguloRetangulo(a,b,c));
	
return 0;
}
