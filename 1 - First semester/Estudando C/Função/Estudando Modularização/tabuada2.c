#include <stdio.h>

void tabuada(int num, int multiplos){
	int result,
		j;
		
	for(j = 0; j <= multiplos; j++){
		result = num * j;
		printf("%d x %d = %d \n",num,j,result);
	}
}

int main(){
	int limite,
		multiplos,
		i;
		
	printf("Forneca o valor Limite de numeros para a tabuada: ");
	scanf("%d",&limite);
	printf("Forneca o valor Limite de multiplos para a tabuada: ");
	scanf("%d",&multiplos);
	
	for(i = 0; i <= limite; i++){
		tabuada(i, multiplos);
		printf("\n");
	}
	
return 0;
}
