#include <stdio.h>

int trianguloRetangulo(int a, int b, int c){
	if(a > b && a > c){
		if(a*a == b*b + c*c) return 1;
		else return 0;
	}
	else if(b > a && b > c){
		if(b*b == a*a + c*c) return 1;
		else return 0;
	}
	else{
		if(c*c == a*a + b*b) return 1;
		else return 0;
	}
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
