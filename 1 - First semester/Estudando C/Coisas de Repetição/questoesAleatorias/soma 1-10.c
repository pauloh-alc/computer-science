#include <stdio.h>
#include <math.h>

int main(){
	int soma, i;
	soma = 0;
	for(i = 1; i <= 10; i++){
		soma = soma + i;
	}
	
	printf("Soma de [1-10] e igual a %d.", soma);

	return 0;
	
}
