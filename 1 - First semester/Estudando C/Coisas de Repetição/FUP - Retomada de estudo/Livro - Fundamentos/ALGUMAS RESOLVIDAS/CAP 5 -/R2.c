#include <stdio.h>

int main(){
	int n,
		i,
		j;
	float fat,
		E;
		
	printf("Entre com o valor de 'N': ");
	scanf("%d",&n);
	
	E = 1.0;
	printf("E = %.1f + ",E);
	for(i = 1; i <= n; i++){
		fat = 1;
		for(j = 1; j <= i; j++){
			fat = fat * j;
		}
		E = E + 1.0 / fat;
		printf("1 / %.1f", fat);
		if(i < n) printf(" + ");
	}
	printf("\nE = %.2f.\n",E);
return 0;
}
