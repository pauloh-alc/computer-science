/*	Faça um programa que leia um inteiro n < 100 e os elementos de uma matriz real quadrada An×n e verifica se *
 *	a matriz A tem uma linha, coluna ou diagonal, composta apenas por zeros.										*/
#include <stdio.h>
#define MAX_L 100
#define MAX_C 100

int main(){
	int m[MAX_L][MAX_C];
	int n, lin, col, contador, sentinela;
	
	printf("Entre com um numero 0 > 'n' < 100: ");
	scanf("%d",&n);
	printf("\n");
	
	// Entrada de dados:
	for (lin = 0; lin < n; lin++) {
		for (col = 0; col < n; col++) {
			printf("Entre com o elemento m[%d][%d]: ", lin, col);
			scanf("%d", &m[lin][col]);
		}
		printf("\n");
	}
	// Exibindo matriz: 
	for (lin = 0; lin < n; lin++) {
		printf("|");
		for (col = 0; col < n; col++) {
			printf("%3d",m[lin][col]);
		}
		printf(" |\n");
	}
	
	//Processamento:
	sentinela = -1;
	for (lin = 0; lin < n; lin++) {
		contador = 0;
		for (col = 0; col < n; col++) {
			if (m[lin][col] == 0) contador += 1;
		}
		if (contador == n) {
			sentinela = 1;
			break;
		}
	}
	
	if (sentinela == 1) printf("A matriz possui alguma linha composta somente por elementos '0'. A linha %d possui somente elementos 'Zero'. \n",lin);
	else				printf("A matriz nao possui nenhuma linha composta somente por elementos 0. \n");
	
	
	sentinela = -1;
	contador = 0;
	for (col = 0; col < n; col++) {
		contador = 0;
		for (lin = 0; lin < n; lin++) {
			if (m[lin][col] == 0) contador += 1;
		}
		if (contador == n) {
			sentinela = 1;
			break;
		}
	}
	if (sentinela == 1) printf("\nA matriz possui coluna composta somente por elementos '0'. A coluna %d possui somente elementos 'Zero'. \n",col);
	else				printf("\nA matriz nao possui nenhuma coluna composta somente por elementos 0. \n");
	
	contador = 0;
	for (lin = 0; lin < n; lin++) {
		if(m[lin][lin] == 0) contador += 1;
	}
	if(contador == n) printf("\nA diagonal principal e composta apenas por elementos 0. \n");
	else 			  printf("\nA diagonal principal nao e composta somente por elementos 0. \n");
	
	contador = 0;
	for (col = 0; contador != n; col++) {
		for (lin = 0; lin < n; lin++) {
			if (lin + col == n - 1 && m[lin][col] == 0) {
				contador += 1;
			}
		}
	}
	
	if(contador == n) printf("\nA diagonal secundaria e composta apenas por elementos 0. \n");
	else 			  printf("\nA diagonal secundaria nao e composta somente por elementos 0. \n");
return 0;
}
