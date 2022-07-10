#include <stdio.h>

int main(){
	// Exercício 7 -
	int N,i;
	
	printf("Entre com um valor N para saber seus divisores >>>");
	scanf("%d",&N);
	
	printf("\n");
	printf("Os divisores do numero %d sao:\n",N);
	
	for(i = 1; 1 <= N; i++){
		if(N % i == 0){
			printf("%d", i);
		}
		
		if(i < N && N % i == 0) printf(", "); // Somente para não ficar com a ultima virgula.	
	}
	
return 0;
}
