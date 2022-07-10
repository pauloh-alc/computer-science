#include <stdio.h>
#include <math.h>

int main(){
	// Descrição: 10 ° - Escreva um programa que leia os coeficientes A, B, e C e um valor x e retorne o resultado de
	//		     sua aplicação na função f (x) = Ax^2+Bx+C.
	// Dados de entrada: Coeficientes A,B,C.
	// Dados de saída: Resultado da função.
	
	float f, x, A, B, C;
	printf("Entre com o coeficiente A >>");
		scanf("%f", &A);
	printf("Entre com o coeficiente B >>");
		scanf("%f", &B);
	printf("Entre com o coeficiente C >>");
		scanf("%f", &C);
	printf("Entre com um valor para x >>");
		scanf("%f", &x);
	f = (A * pow(A,2)) + (B*x) + C;
	
	printf("Resultado da funcao f(x) = Ax^2+Bx+C e = %f.\n", f);
}