#include <stdio.h>
#define P 10
int main(){
	// Dicionário de dados:
	float preco[P];			 // Armazena o preço de dez produtos.
	int qtd[5][P];			 // Armazena a quantidade estocada de cada produto em 5 armazéns.
	int i,j;
	int qtdPorArmazem[5]; 	 // Armazena a quantidade total de produtos em cada armazem. 
	int qtdDoProduto[P];     // Armazena a quantidade total de cada produto nos 5 armazens.
	int produtoMaior, coluna, linha;
	// Dados de entrada:
	printf("Vamos armazenar o preco de 'dez' produtos em um vetor: \n\n");
	for (i = 0; i < P; i++) {
		printf("Entre com o preco do produto %d: ",i);
		scanf("%f",&preco[i]);
		qtdDoProduto[i] = 0;  // Armazenando '0' nas posições [0..P-1] do vetor qtdDoProduto para que no momento das operações com esse vetor ele não fique com Lixo de memória. 
	}
	
	printf("\nVamos armazenar a quantidade estocada de cada produto em 5 armazens: \n\n");
	for (i = 0; i < 5; i++) {
		printf("[Armazem %d] \n",i);
		for (j = 0; j < P; j++) {
			printf("'Quantidade' do produto %d: ",j);
			scanf("%d",&qtd[i][j]);
		}
		printf("\n");
	}
	
	// Processamento:
	
	for (i = 0; i < 5; i++) {
		qtdPorArmazem[i] = 0; // Armazenando '0' nas posições [0..P-1] do vetor qtdPorArmazem para que no momento das operações com esse vetor ele não fique com Lixo de memória.
	}
	
	// Operação para encontrar a quantidade de produtos estocados em cada um dos armazéns.
	for (i = 0; i < 5; i++) {
		for (j = 0; j < P; j++) {
			qtdPorArmazem[i] = qtdPorArmazem[i] + qtd[i][j]; 
		}
	}
	
	// Operação para encontrar a quantidade de produtos estocado nos 5 armazéns
	for (j = 0; j < P; j++) {
		for (i = 0; i < 5; i++) {
			qtdDoProduto[j] = qtdDoProduto[j] + qtd[i][j];
		}
	}
	// Dados de saída:	
	printf("\n Quantidade total de produtos estocado em cada armazem: \n");
	for (i = 0; i < 5; i++) {
		printf("[Armazem %d]\n",i);
		printf("Quantidade: %d. \n",qtdPorArmazem[i]);
	}
	
	printf("\n Quantidade de cada produto estocado nos 5 armazens: \n");
	for (i = 0; i < P; i++) {
		printf("[Produto %d]\n",i);
		printf("Quantidade: %d. \n",qtdDoProduto[i]);
	}
	
	// Descobrindo a posicao e o produto que possui maior quantidade:
	produtoMaior = qtd[0][0];
	coluna = 0;
	linha = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < P; j++) {
			if (qtd[i][j] > produtoMaior) {
				produtoMaior = qtd[i][j];
				linha = i;
				coluna = j;
			}
		}
	}
	
	printf("\nPreco do produto que possui maior estoque em um unico armazem: \n");
	printf("O produto: %d. \n",coluna);
	printf("Armazem: %d. \n",linha);
	printf("Quantidade: %d. \n",qtd[linha][coluna]);
	printf("Preco: %.2f. \n",preco[coluna]);
	
	printf("\n O valor de cada um dos produtos: \n");
	for (i = 0; i < P; i++) {
		printf("Produto %d: %.2f.\n", i, preco[i]); 
	}
	
return 0;	
}
