#include <stdio.h>

int main(){
	// Processo para exibir os n primeiros termos de uma pg
	
	int razao, primeiro, termos, var,x; 
	
	puts("Digite a razao da PG >>>");
	scanf("%d",&razao);
	puts("Digite o primeiro termo >>>");
	scanf("%d",&primeiro);
	puts("Digite o numero de termos >>>");
	scanf("%d",&termos);
	
	x = 1;
	var = 2;
	
	while(x <= termos){
		printf("%d° termo - %d\n",x,var);
		var = var * razao;
		x = x + 1;
	}
	
	return 0;
}
