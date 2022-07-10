#include <stdio.h>

int main(){
	int n,
		numero,
		maior,
		i;
	
	printf("Entre com 'N' numeros inteiros: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("Informe o numero %d: ",i);
		scanf("%d",&numero);
		
		if(i == 1) maior = numero;
		if(numero > maior) maior = numero;
	}
	printf("O maior numero digitado foi >> %d.",maior);

return 0;
}
