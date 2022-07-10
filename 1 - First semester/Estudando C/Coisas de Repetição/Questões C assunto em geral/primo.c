#include <stdio.h>

int main(){
	int i,j,N, cont = 0;
	
	printf("Entre com um numero 'N': ");
	scanf("%d",&N);
	
	i = 1;
	printf("1, ");
	while(i < N){
		cont = 0;
		for(j = 1; j <= i; j++){
			if(i % j == 0){
				cont++;
			}
		}
		if(cont == 2) printf("%d, ",i);

	i++;
	}
	
return 0;
}
