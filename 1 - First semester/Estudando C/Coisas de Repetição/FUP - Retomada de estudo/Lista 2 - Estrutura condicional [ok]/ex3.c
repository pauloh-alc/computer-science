#include <stdio.h>

int main(){
	
	int numeroA,
		numeroB;
	
	printf("Entre com um numero A: ");
	scanf("%d",&numeroA);
	printf("Entre com um numero B: ");
	scanf("%d",&numeroB);
	
	if(numeroA % numeroB == 0){
		printf("Numero %d E MULTIPLO do numero %d", numeroA, numeroB);
	}else{
		printf("Numero %d NAO E MULTIPLO do numero %d", numeroA, numeroB);
	}
return 0;
}
