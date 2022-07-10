#include <stdio.h>

int dobraValor(int a){
	printf("O numero original: %d \n", a);
	a = a * 2;
	printf("O dobro e: %d \n", a);
	
	return a;
}

int main(){
	int x = 10;
	
	x = dobraValor(x);  // Modificamos o valor de 'x'
	printf("O valor de x e: %d \n",x);
return 0;
}
