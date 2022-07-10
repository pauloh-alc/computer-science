#include <stdio.h>

int fatorial(int n){
	int i,
	    fat,
		memoria;
	    
	fat = 1;
	for(i = 1; i <= n; i++){
		memoria = fat * i;
		fat = memoria;
	}
	return fat;
}

int main(){
	int x,
		resultado;
		
	printf("Entre com um valor 'x' para saber o fatoria de 'x!' : ");
	scanf("%d",&x);
	
	resultado = fatorial(x);
	printf("Fatoria de %d! = %d. \n",x,resultado);
return 0;
}
