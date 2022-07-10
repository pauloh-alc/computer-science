#include <stdio.h>

int main(){
	float altura, pesoIdeal;
	char sexo;
	printf("Entre com a altura de uma pessoa: ");
	scanf("%f",&altura);
	printf("Entre com o 'sexo' dessa pessoa (m ou f): ");
	scanf("%s%*c",&sexo);
	if(sexo == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
		printf("Peso Ideal desse homem e: %.2f.\n",pesoIdeal);
	}
	else if(sexo == 'f'){
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("Peso Ideal dessa mulher e: %.2f.\n",pesoIdeal);
	}
	else{
		printf("Erro: voce informou um sexo invalido !!");
	}
return 0;
}
