#include <stdio.h>
#include <math.h>
int main(){
	// Exercício 12 -
	
	int a,b,c;
	float delta,x1,x2;
	
	printf("Entre com o coeficiente A >>");
	scanf("%d",&a);
	
	if(a == 0){
		printf("NAO E uma equacao do SEGUNDO grau.");
		return 1;
	}
	
	printf("Entre com o coeficiente B >>");
	scanf("%d",&b);
	printf("Entre com o coeficiente C >>");
	scanf("%d",&c);

	delta = b*b - 4 * a * c;
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);

	if(delta < 0){
		printf("Nao existe raiz real.");
	}
	else if(delta == 0 ){
		printf("Raiz unica.");
		printf("\nRaiz = %f", x1);
	}
	else{
		printf("Duas raizes.");
		printf("\nRaiz 1 = %.1f", x1);
		printf("\nRaiz 2 = %.1f", x2);
	}
return 0;
}