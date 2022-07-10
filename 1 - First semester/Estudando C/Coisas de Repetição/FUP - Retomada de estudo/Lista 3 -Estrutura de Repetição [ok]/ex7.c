#include <stdio.h>

int main(){
	
	int n,
		i;
	
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d",i);
			if(i < n) printf(", ");
			if(i == n) printf(".");
		}
	}
return 0;
}
