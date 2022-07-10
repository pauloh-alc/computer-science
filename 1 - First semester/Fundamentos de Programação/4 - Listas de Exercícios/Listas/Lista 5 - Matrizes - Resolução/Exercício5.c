#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i,j;
	int x,sinalizador;
	
	// Trecho responsável por preencher uma matriz[0..TAM-1][0..TAM-1]
	// de forma "aleatória" com função rand() (números gerados entre [0-9]).
	
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			matriz[i][j] = rand() % MAX;
		}
	}
	
	// Techo que imprime os elementos da matriz[0..TAM-1][0..TAM-1],
	// de acordo com suas respectivas posições.
	
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n Entre com um valor 'x' para buscar na matriz: ");
	scanf("%d",&x);
	
	// Processsamento:
	sinalizador = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(x == matriz[i][j]){
				sinalizador = 1;
				break;
			}
		}
		if(sinalizador == 1) break;
	}
	
	if(sinalizador) printf("\n x, isto e, o %d, foi encontrado na linha %d, coluna %d. \n",x,i,j);
	else			printf("\n Elemento nao encontrado !! \n");
	
return 0;
}
