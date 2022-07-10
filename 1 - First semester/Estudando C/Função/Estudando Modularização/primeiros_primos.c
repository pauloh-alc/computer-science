#include <stdio.h>

int primos(int numero){
	int i,
		div,
		q;
	
	div = 0;
	for(i = 1; i <= numero; i++){
		if(numero % i == 0){
			div++;
		}
	}
	if(div == 2){
		printf("%d ",numero);
		q++;
	} 
	return q;
}

int main(){
	int n,
		numero,
		quantidade;
		
	printf("Entre com um valor 'n' para descobrir os n primeiros primos >>> ");
	scanf("%d",&n);
	numero = 1;
	do{
		quantidade = primos(numero);
		numero++;
	}while(quantidade < n);
	
return 0;
}
