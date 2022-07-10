#include <stdio.h>

int main(){
	int n,
		numero,
		i,
		j,
		fat;
		
		
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("Entre com o numero '%d', para saber seu fatorial: ",i);
		scanf("%d",&numero);
		fat = 1;
		for(j = 1; j <= numero; j++){
			fat = fat * j;
		}
		printf("O fatorial de %d! e >> %d.\n",numero,fat);
	}
	
return 0;
}
