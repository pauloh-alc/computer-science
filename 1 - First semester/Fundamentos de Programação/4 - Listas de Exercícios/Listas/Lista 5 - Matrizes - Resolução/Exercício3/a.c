#include <stdio.h>
#define TAM 5
// Exercício 3, item a) a soma dos elementos que estão na diagonal principal.
int main(){
	// Dicionário de dados:
	int matriz[TAM][TAM];
	int i, j, somaP;
	
	// Entrada de dados:
	// Trecho que recebe elementos para a matriz[0..TAM-1][0..TAM-1],
	// verificando se as posições 'i' e 'j' são iguais. Se a condição for
	// verdadeira, atualiza o valor de 'SomaP', pois o elemento verificado
	// faz parte da diagonal principal. Caso contrário 'somaP' continua com o mesmo valor.
	
	somaP = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("Digite o elemento da linha %d coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
			if(i == j) somaP = somaP + matriz[i][j];
		}
		printf("\n");
	}
	
	// Saída de dados:
	// Trecho que imprime a matriz[0..TAM-1][0..TAM-1]
	// com os elementos de acordo com suas respectivas 
	// linhas e colunas. Logo depois exibe o resultado 
	// da Soma dos elementos da diagnal principal.
	
	printf("Matriz[%d][%d]:\n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	printf("\nA soma dos elementos que estão na diagonal principal: %d. \n",somaP);
return 0;
}
