#include <stdio.h>

int main(){
	
	int n,
		i,
		denominador;
	float pi;
	printf("Entre com o valor 'N': ");
	scanf("%d",&n);
	
	pi = 0;
	denominador = 1;
	for(i = 0; i < n; i++){
		if(i % 2 != 0) pi = pi - 4.0 / denominador;
		if(i % 2 == 0) pi = pi + 4.0 / denominador;
		denominador += 2; 
	}
	printf("%f",pi);
return 0;
}
