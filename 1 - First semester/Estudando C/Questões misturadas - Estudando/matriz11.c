#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4
	void menu ()
	{
		puts("[0] SAIR.  ");
		puts("[1] Item a)");
		puts("[2] Item b)");
		puts("[3] Item c)"); 
	}
	
	void a (int m[TAM][TAM]) 
	{
		int x, a, c;
		
		printf("Entre com um numero 'x': ");
		scanf("%d",&x);
		
		while (1) {
			printf("Entre com um numero 0 <= 'a' < 4: ");
			scanf("%d",&a);
		if (a >= 0 && a < 4) break;
		}
		
		for (c = 0; c < TAM; c++) {
			m[a][c] = m[a][c] * x;
		}
	}
	
	void b (int m[TAM][TAM]) 
	{
		int a, b, c;
		
		while (1) {
			printf("Entre com a linha 'a': ");
			scanf("%d",&a);
		if (a >= 0 && a < 4) break;
		}
		while (1) {
			printf("Entre com a linha 'b': ");
			scanf("%d",&b);
		if (b >= 0 && b < 4) break;
		}
		
		for (c= 0; c < TAM; c++) {
			m[a][c] = m[a][c] + m[b][c];
		}
	}
	
	void c (int m[TAM][TAM])
	{
		int a, b, c, x;
		
		printf("Entre com um numero 'x': ");
		scanf("%d",&x);
		
		while (1) {
			printf("Entre com a linha 'a': ");
			scanf("%d",&a);
		if (a >= 0 && a < 4) break;
		}
		
		while (1) {
			printf("Entre com a linha 'b': ");
			scanf("%d",&b);
		if (b >= 0 && b < 4) break;
		}
		
		for (c = 0; c < TAM; c++) {
			m[a][c] = (m[b][c] * x) + m[a][c];
		}
	}
	
	void matrizModificada (int m[TAM][TAM])
	{
		int i, j;
		// Matriz modificada:
		for (i = 0; i < TAM; i++) {
			printf("|");
			for (j = 0; j < TAM; j++) {
				printf("\t%d",m[i][j]);
			}
			printf("\t|\n");
		}
	}
	
int main ()
{
	int m[TAM][TAM];
	int i,j, opcao;
	
	// Gerando matriz com números pseudoaleatórios:
	srand(time(NULL));
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < TAM; j++) {
			m[i][j] = rand() % 10;
		}
	}
	
	// Exibindo matriz raiz:
	printf("Matriz gerada: \n");
	for (i = 0; i < TAM; i++) {
		printf("|");
		for (j = 0; j < TAM; j++) {
			printf("\t%d",m[i][j]);
		}
		printf("\t|\n");
	}
	// Chamando função a)
	while (1) {
		menu ();
		printf("Entre com sua opcao: ");
		scanf("%d",&opcao);
		switch (opcao) {
			case 1:{
				a (m);
				matrizModificada (m);
				break;
			}
			case 2:{
				b (m);
				matrizModificada (m);
				break;
			}
			case 3:{
				c (m);
				matrizModificada (m);
				break;
			}
		}
	if (opcao = 0) break;
	}
	return 0;
}
