#include <stdio.h>


int roboSolda(void){
	int portas,
		pneus,
		tapetes,
		carroMontado;
		
	printf("Digite a quantidade de portas: ");
	scanf("%d",&portas);
	printf("Digite a quantidade de pneus: ");
	scanf("%d",&pneus);
	printf("Digite a quantidade de tapetes: ");
	scanf("%d",&tapetes);
	
	carroMontado = portas + pneus + tapetes;
	
	return carroMontado;
}

int roboPintura(void){
	int quantTinta, 
		carroPintado;
		
		printf("Entre com a quantidade da tinta: ");
		scanf("%d",&quantTinta);
		
		carroPintado = roboSolda() + quantTinta;
		
		return carroPintado;
}

int roboAddOleo(void){
	int quantOleo,
		carroOleo;
		
		printf("Entre com a quantidade de Oleo: ");
		scanf("%d",&quantOleo);
		
		carroOleo = roboPintura() + quantOleo;
		
		return carroOleo;
}


int main(){
	printf("Resultado final: %d. \n",roboAddOleo());
return 0;
}
