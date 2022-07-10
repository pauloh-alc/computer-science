#include <stdio.h>
#include <math.h>

int main(){
	// Calcula a potência de um número
	
	int numero, base, expoente,i, result;

	printf("Entre a BASE >>");
	scanf("%d",&base);
	printf("Entre o EXPOENTE >>");
	scanf("%d",&expoente);

	result = 1;
	for(i = 1; i <= expoente; i++){
		result = result * base;
		printf("%d\n",result);
	}

	printf("%d elevado a %d = %d.\n", base, expoente, result);
	
	
	return 0;
}
