#include <stdio.h>

int main(){
	// Exercício resolvidos - 8
	
	int termos;
	int i, num1, num2, num3;
	
	printf("Entre com o 'numero' de termos que voce deseja >>> ");
	scanf("%d",&termos);
	
	num1 = 2;
	num2 = 7;
	num3 = 3;
	
	i = 1;

	printf("Serie = ");
	
	while(i <= termos){
		
		if(i == 1){ // Só vai mostrar uma única vez.
			
			if(termos >= 1){ 
				printf("%d", num1);
				if(i < termos) printf(", ");
				i += 1; // Estou add 1;
			} 
			if(termos >= 2) {
				
				printf("%d", num2);
				if(i < termos) printf(", ");
				i += 1;
			}
			if(termos >= 3){
				
				printf("%d", num3);
				if(i < termos) printf(", ");
				i += 1;	
			}
		}
		
		if(i <= termos){
			num1 = num1 * 2;
			printf("%d",num1);
			if(i < termos) printf(", ");
			i += 1;
		}
		
		if(i <= termos){
			num2 = num2 * 3;
			printf("%d",num2);
			if(i < termos) printf(", ");
			i += 1;
		}
		
		if(i <= termos){ // Só entra nesse bloco, se i for 'menor' ou 'igual' a termo
			num3 = num3 * 4;
			printf("%d",num3);
			if(i < termos) printf(", ");
			i += 1;
		}		
	}
return 0;
}
