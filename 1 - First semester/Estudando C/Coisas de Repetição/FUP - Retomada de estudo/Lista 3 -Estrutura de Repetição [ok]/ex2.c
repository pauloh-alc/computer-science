#include <stdio.h>

int main(){
	
	int i,
		n,
		result;

	printf("Entre com um numero 'N' de [1-9]: ");
	scanf("%d",&n);
	if(n < 1 || n > 9){
		printf("Erro: numero digitado nao atende o intervalo !!");
		return 1;
	}
	for(i = 0; i < 11; i++){
		result = i * n;
		printf("%d x %d = %d\n",i,n,result);
	}
return 0;
}
