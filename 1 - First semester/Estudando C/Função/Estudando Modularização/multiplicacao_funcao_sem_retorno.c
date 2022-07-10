#include <stdio.h>
// Função sem retorno de dados

void multiplicacao(float a, float b,  float c){
	printf("Resuldado = %f. \n",a*b*c);
}

int main(){
	float num1,
		  num2,
		  num3;
		  
	printf("Entre com os valores de A, B e C respectivamente: ");
	scanf("%f%f%f",&num1,&num2,&num3);
	
	multiplicacao(num1,num2,num3);
	multiplicacao(2,2,3);
	
return 0;
}
