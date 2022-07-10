#include <stdio.h>

int main(){
	// Exercício resolvidos - 3
	int N, i, j;
	int numero, fat;
	
	printf("Entre com um valor 'N' para a quantidade de valor que deseja inserir >>> ");
	scanf("%d",&N);
	
	printf("\n");
	
	for(i = 1; i <= N; i++){
		printf("Entre com um numero para saber seu fatorial >>>");
		scanf("%d",&numero);
		
		fat = 1;
		printf("Fatorial de %d! >>> ",numero);
		for(j = 1; j <= numero; j++){
			fat = fat * j;
			printf("%d",j);
			if(j < numero) printf(" x ");
		}
		printf(" = %d. \n",fat);
	}
	
return 0;
}
