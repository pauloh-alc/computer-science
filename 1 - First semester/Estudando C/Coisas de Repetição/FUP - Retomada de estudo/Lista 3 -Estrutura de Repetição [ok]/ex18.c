#include <stdio.h>

int main(){
	
	int binario,
		expoente,
		div,
		resul,
		resto,
		soma,
		potencia;
		
	printf("Entre com um numero 'binario': ");
	scanf("%d",&binario);
	
	soma = 0;
	expoente = 0;
	div = binario;
	
	while(div > 0){
		
		resto = div % 10;
		div = div / 10;
		
		if(expoente == 0){ 
			potencia = 1;
		}
		else{
			potencia = potencia * 2;
		}
		
		 resul = resto * potencia;
		 soma = soma + resul;
		 
		expoente++;	 
	}
	printf("Numero decimal [%d].",soma);
return 0;
}
