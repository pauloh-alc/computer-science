#include <stdio.h>
#include <math.h>

int main(){
	float numerador, denominador,S;
	
	denominador = 1;
	numerador = 1;
	S = 0;
	while(denominador < 51){
		printf("%.1f/%.1f + ",numerador,denominador);
		S = S + (numerador/denominador);
		numerador += 2;
		denominador++;
	}
	printf("\nS = %f",S);

return 0;

}
