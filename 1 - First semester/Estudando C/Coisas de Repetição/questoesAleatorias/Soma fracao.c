#include <stdio.h>
#include <math.h>

int main(){
	// E = 1 + 1/1 + 1/2 + 1/3 + ... + 1/N;
 
	int n, i;
	float E;
	
	printf("Entre com um valor positivo >>");
	scanf("%d",&n);

	printf("E = 1 + ");

	E = 1;
	for(i = 1; i <= n; i++){
		printf("1/%d + ",i);	
		E = E + 1.0 / i;
	}
	printf("\nFinal E = %f.\n", E);
	return 0;
}
