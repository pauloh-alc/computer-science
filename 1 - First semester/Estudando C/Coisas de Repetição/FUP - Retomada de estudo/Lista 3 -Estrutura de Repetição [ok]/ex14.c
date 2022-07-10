#include <stdio.h>

int main(){
	int n,
		i,
		j,
		x;
		
	printf("Entre com um numero 'N': ");
	scanf("%d",&n);
	
	x = 1;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
return 0;
}
