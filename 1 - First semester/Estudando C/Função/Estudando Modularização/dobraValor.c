#include <stdio.h>

/*
	Funcao: Dobra o valor da variavel x
	Dados de entrada: 
		x: valor de x
	Dados de saida:
		o dobro do valor de x

*/

void dobraValor(int a){
	printf("Numero original: %d \n",a);
	a = a * 2;
	printf("O seu drobro e: %d \n",a);
}

int main(){
	int x;
	x = 10;
	
	dobraValor(x);
 	printf("O valor original de x: %d \n",x);
	
	dobraValor(9);
	dobraValor(50);
	
return 0;
}
