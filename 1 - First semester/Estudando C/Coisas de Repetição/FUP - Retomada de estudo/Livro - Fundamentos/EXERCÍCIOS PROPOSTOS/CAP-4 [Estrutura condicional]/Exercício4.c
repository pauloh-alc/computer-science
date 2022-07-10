#include <stdio.h>

int main(){
	
	int n1,
		n2,
		n3;
		
	printf("Entre com 3 numero respectivamente: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1 > n2 && n1 > n3){
		printf("Maior numero digitado: %d.\n",n1);
	}
	else if(n2 > n1 && n2 > n3){
		printf("Maior numero digitado: %d.\n",n2);
	}
	else if(n3 > n1 && n3 > n2){
		printf("Maior numero digitado: %d.\n",n3);
	}
	else{
		printf("Numeros digitados sao iguais.\n");
	}
	
return 0;
}
