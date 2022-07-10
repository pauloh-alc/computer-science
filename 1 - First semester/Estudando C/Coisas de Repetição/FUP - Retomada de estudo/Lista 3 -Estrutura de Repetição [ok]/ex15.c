#include <stdio.h>

int main(){
	
	int n,
		i;
		
	float H;
	
	printf("Entre com um valor 'N' inteiro e positivo: ");
	scanf("%d",&n);
	
	H = 1;
	printf("H = 1 + ");
	for(i = 1; i <= n; i++){
		printf("1 / %d",i);
		if(i < n) printf(" + ");
		H = H + 1.0 / i;
	} 
	printf("\nValor de H = %.2f",H);
}
