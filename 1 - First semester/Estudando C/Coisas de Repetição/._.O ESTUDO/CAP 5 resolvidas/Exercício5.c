#include <stdio.h>

int main(){
	// Exercício resolvidos - 5
	// OBS: TERMINAR;
	printf("Entre com o 'numero' de termos que voce deseja >>>");
	scanf("%d",&termos);
	
	printf("Entre com o 'x' >>>");
	scanf("%d",&x);
	
	S = 0;
	expoente = 2;
	for(i = 1; i <= termos; i++){
		fat = 1;
		
		if(i == 4){
		for(i = 4; i > 0; i--)
			for(j = 1; j <= i; j++){
				fat = fat * j;
			}	
		}
		else{
			for(j = 1; j <= i; j++){
			fat = fat * j;
			}
		}
		
		if(i % 2 != 0){
			S = S + (pow(-x, expoente) / fat);
		}
		else{
			S = S + (pow(+x, expoente) / fat);
		}
		expoente++;
		
	}
	printf("S = %f \n",S);
return 0;
}
