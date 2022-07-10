#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Entre com a nota: ");
	scanf("%f",&nota);
	
	if(nota >= 8 && nota <= 10) printf("A");
	else if(nota >= 7 && nota < 8) printf("B");
	else if(nota >= 6 && nota < 7) printf("C");
	else if(nota >= 5 && nota < 6) printf("D");
	else if(nota >= 0 && nota < 5) printf("E");
	
return 0;
}
