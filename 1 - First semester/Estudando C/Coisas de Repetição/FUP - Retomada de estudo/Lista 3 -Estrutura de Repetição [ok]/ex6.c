#include <stdio.h>

int main(){
	
	int n,
		i,
		soma;
	
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	soma = 0;
	for(i = n-1; i >= 1; i--){
		if(i % 2 != 0){
			soma = soma + i;
		}
	}
	printf("A soma de todos os numero impares menores que '%d' e >> %d.\n",n,soma);
return 0;
}
