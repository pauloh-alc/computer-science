#include <stdio.h>

int main(){
	int numero, contador,i, resto,j;
	

	for(j = 1; j <= 100; j++){
		contador = 0;
		for(i = 1; i <= j; i++){
			 resto = j % i;
			 if(resto == 0){
			 	contador += 1; 
			 } 
		}
		
		if(contador == 2){
			printf("%d e primo.\n", j);
		}
		else{
			printf("%d nao e primo.\n", j);
		}
	}
	return 0;
	
}
