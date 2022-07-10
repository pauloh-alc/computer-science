#include <stdio.h>
#include <math.h>

int main(){
	int i, n, numero;
	
	printf("Entre com a quantidade de numeros que voce deseja fornecer >>");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		printf("Entre com um numero inteiro e positivo >>");
		scanf("%d",&numero);
		if(numero % 2 == 0){
			printf("%d e um numero par.\n", numero);
		}
		else{
			printf("%d e um numero impar.\n",numero);
		}
	}

return 0;
}
