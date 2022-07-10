#include <stdio.h>

int main(){
	int n,
		i;
		
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i+=1){
		printf("%d",i);
		if(i < n){
			printf(", ");
		}
		if(i == n) printf(".");
	}
}
