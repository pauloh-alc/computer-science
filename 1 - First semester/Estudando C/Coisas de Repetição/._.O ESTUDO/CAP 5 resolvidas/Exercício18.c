#include <stdio.h>

int main(){
	// Exercício resolvidos - 18
	int i, valor, quadrado, cubo, raiz;
	
	do{
		printf("Entre valor >>> ");
		scanf("%d",&valor);
		printf("\n");
		
		quadrado = valor * valor;
		cubo = valor * valor * valor;
		printf("Quadrado do valor = %d. \n",quadrado);
		printf("Cubo do valor = %d. \n", cubo);
		
		
		for(i = 1; i < valor; i++){
			raiz = i * i;
			if(raiz == valor){
				break;	
			}
		}
		if(raiz == valor) printf("Raiz = %d. \n",i);
		else printf("Valor nao tem raiz inteira. \n");
		
		printf("\n");
	}while(valor > 0);
}
