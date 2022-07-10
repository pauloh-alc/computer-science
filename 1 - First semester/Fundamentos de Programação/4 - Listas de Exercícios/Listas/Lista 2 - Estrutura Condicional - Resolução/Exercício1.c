#include <stdio.h>

int main(){
	// Exercício 1 -
	
	float num1, num2, maior;

	printf("Entre com um valor >> ");
	scanf("%f",&num1);
	printf("Entre com outro valor >> ");
	scanf("%f",&num2);
	
	if(num1 > num2){
		maior = num1;
	}
	else if(num2 > num1){
		maior = num2;
	}
	else{
		printf("O %f e igual a %f.", num1,num2);
	}
	
	printf("O maior numero informado e %f",maior);

return 0;

}