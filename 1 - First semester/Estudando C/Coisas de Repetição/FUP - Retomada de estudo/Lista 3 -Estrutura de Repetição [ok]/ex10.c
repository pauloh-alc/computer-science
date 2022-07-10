#include <stdio.h>

int main(){
	int n,
		i,
		cont;
		
	printf("Entre com um numero 'N' para saber se ele e Primo: ");
	scanf("%d",&n);
	
	cont = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cont++;
		}
	}
	
	if(cont == 2) printf("O numero '%d' e Primo.\n",n);
	else printf("O numero '%d' nao e Primo.\n",n);
	
	return 0;
}
