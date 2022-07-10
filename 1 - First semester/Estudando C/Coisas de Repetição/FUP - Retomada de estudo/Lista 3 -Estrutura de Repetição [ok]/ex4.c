#include <stdio.h>

int main(){
	
	int n,
		i,
		numero,
		soma;
		
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	soma = 0;
	
	for(i = 1; i <= n; i++){
		printf("Entre com o 1 numero: ");
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("A soma dos numeros digitados >> %d.\n",soma);
	
return 0;
}
