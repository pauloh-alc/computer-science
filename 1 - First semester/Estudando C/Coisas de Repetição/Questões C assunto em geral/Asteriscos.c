#include <stdio.h>

int main(){
	int N,i,j;
	printf("Entre com o valor N: ");
	scanf("%d",&N);
	
	for(i = N; i > 0; i--){
		if(i % 2 == 0){
			printf(" ");
		}
		for(j = 1; j <= N; j++){
			printf("* ");
		}
		printf("\n");
		
	}
return 0;
}
