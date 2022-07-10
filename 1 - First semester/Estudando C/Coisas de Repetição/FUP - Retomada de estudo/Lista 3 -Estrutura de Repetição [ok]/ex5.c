#include <stdio.h>

int main(){
	
	int n,
		i,
		fat;
		
	printf("Informe um valor 'N' positivo para saber o fatorial: ");
	scanf("%d",&n);
	
	fat = 1;
	for(i = 1; i <= n; i++){
		fat = fat * i;
	}
	printf("O fatorial do numero %d! >> %d.",n,fat);
return 0;
}
