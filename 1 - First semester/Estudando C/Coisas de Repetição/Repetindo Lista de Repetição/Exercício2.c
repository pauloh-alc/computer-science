#include <stdio.h>

int main(){
	// Exercício 2 -
	int i, N, result;
	
	printf("Entre com um valor 'N' de acordo com o seguinte criterio ]1 - 9[  >>> ");
	scanf("%d",&N);
	if(N <= 1 || N >= 9){
		printf("Erro: voce entrou com um 'N' invalido.\n");
		return 1;
	}
	
	for(i = 0; i <= 10; i++){
		result = N * i;
		printf("%d x %d = %d. \n",N,i,result);
	}
		
return 0;	
}

