#include <stdio.h>

int main(){
	// Exercício resolvidos - 11
	int numero;
	int i;
	int quantidadeDivisores, resto;
	

	printf("Entre com um 'numero' inteiro maior que 1 para saber se o numero e ou nao primo >>> ");
	scanf("%d",&numero);
	
	quantidadeDivisores = 0;
	for(i = 1; i <= numero; i++){
		resto = numero % i;
		if(!resto){
			quantidadeDivisores += 1;
		}
	}
	if(quantidadeDivisores == 2) printf("%d E PRIMO. \n", numero); // Só o 'primo' tem dois divisores.
	else printf("%d NAO E PRIMO. \n", numero);
		
return 0;
}
