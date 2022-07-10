#include <stdio.h>

int main(){
	
	int i;
	char codigo;
	float valor, somaT, somaV, somaP, primeiraPrestacao;
	
	somaT = 0;
	somaV = 0;
	somaP = 0;
	
	for(i = 0; i < 3; i++){
		
		printf("Entre com o 'codigo' da transacao 'V' e 'P' a prazo: ");
		scanf("%c%*c",&codigo);
		
		printf("Entre com o 'valor' da transacao digitada: ");
		scanf("%f%*c",&valor);
		
		if(codigo == 'V' || codigo == 'P'){
			somaT = somaT + valor;
		}
		else{
			printf("Erro: voce informou um codigo invalido !!\n");
			return 1;
		}
		
		if(codigo == 'V'){
			somaV = somaV + valor;	
		}
		else if(codigo == 'P'){
			somaP = somaP + valor;
		}
		
		primeiraPrestacao = somaP / 3.0;
	}
	// somaT = somaV + somaP;
	printf("O valor total das compras a vista: %.2f.\n",somaV);
	printf("O valor total das compras a prazo: %.2f.\n",somaP);
	printf("O valor total das compras efetuadas: %.2f.\n",somaT);
	printf("O valor da primeira prestacao das compras a prazo: %.2f.\n",primeiraPrestacao);
return 0;
}
