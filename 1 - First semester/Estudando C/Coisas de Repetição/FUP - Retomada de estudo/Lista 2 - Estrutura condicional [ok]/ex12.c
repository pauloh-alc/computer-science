#include <stdio.h>
#include <math.h>

int main(){
	int a,
		b,
		c;
	float delta,
		x1,
		x2;
		
	printf("Entre com o coeficiente 'a': ");
	scanf("%d",&a);
	printf("Entre com o coeficiente 'b': ");
	scanf("%d",&b);
	printf("Entre com o coeficiente 'c': ");
	scanf("%d",&c);
	
	if(a == 0){
		printf("Erro: coeficiente 'a' igual a 0. Portanto nao e uma equacao do segundo grau.");
		return 1;
	}
	
	delta = pow(b,2) - 4 * a * c;
	
	if(delta < 0){
		printf("Nao existe raiz real !!");
	}
	else if(delta == 0){
		printf("Raiz unica !!\n");
		x1 = (- b + sqrt(delta)) / (2 * a);
		printf("Raiz [%.2f]",x1);
	}
	else{
		printf("Duas raizes !!\n");
		x1 = (- b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Raiz 1 [%.2f].\n",x1);
		printf("Raiz 2 [%.2f].\n",x2);
	}

return 0;
}
