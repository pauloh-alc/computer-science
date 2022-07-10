#include <stdio.h>

int main(){
	
	char opcao, sexo;
	int entrevistados;
	int femea, macho, sim, nao;
	
	entrevistados = 1;
	sim = 0;
	nao = 0;
	femea = 0;
	macho = 0;
	
	while(entrevistados < 6){
		printf("Voce gostou de determinado produto?\n");
		puts("S - Sim");
		puts("N - Nao");
		scanf("%c",&opcao);
		fflush(stdin);
		if(opcao == 'S') 
			sim++;
		else
			nao++;	
		puts("Informe seu sexo:");
		puts("M - masculino");
		puts("F - feminino");
		scanf("%c",&sexo);
		entrevistados ++;
		if(sexo == 'F')
			femea ++;
		else 
			macho ++;
			
		fflush(stdin);
	}
	printf("\n");
	printf("NUMERO DE FEMEA = %d.\n", femea);
	printf("NUMERO DE MACHO = %d.\n", macho);
	printf("NUMEROS DE SIM = %d.\n", sim);
	printf("NUMEROS DE NAO = %d.\n", nao);
	float pf = (femea*100) /5;
	float pm = (macho*100) /5;
	printf("PORCENTAGEM DE FEMEA = %.1f%%.\n",pf );
	printf("PORCENTAGEM DE MACHOS = %.1f%%.\n",pm );

	
return 0;
}
