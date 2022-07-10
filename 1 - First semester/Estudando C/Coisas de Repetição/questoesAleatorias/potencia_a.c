#include <stdio.h>

int main(){
	
	int base, expoente, potencia, i;
	
	puts("Base: ");
	scanf("%d",&base);
	puts("Expoente:");
	scanf("%d",&expoente);
	potencia = 1;
	for(i = 1; i <= expoente; i+=1){
		potencia = potencia * base;
	}
	printf("%d elevado a %d = %d",base, expoente, potencia);
	
	return 0;
}
