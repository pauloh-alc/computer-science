#include <stdio.h>
#define TAM 2
// Estrutura do tipo Mercadoria formada pelos campos: código, nome, preço e quantidade do produto.
typedef struct {
	int codigo;
	char nome[30];
	float preco;
	int qtd;	
} Mercadoria;
	
	// Procedimento: exibição de menu
	void menu ()
	{
		puts("[0]. SAIR");
		puts("[1]. CADASTRAR PRODUTOS. ");
		puts("[2]. FAZER PEDIDO");
		puts("[3]. EXIBIR ESTOQUE");
	}
	// Procedimento: realiza a leitura de produtos:
	void leitura (Mercadoria produto[])
	{
		int i;
		
		for (i = 0; i < TAM; i++) {
				fflush(stdin);
			printf("Codigo %d: ",i);
			scanf("%d",&produto[i].codigo);
				fflush(stdin);
			printf("Nome %d: ",i);
			scanf("%[^\n]s",produto[i].nome);
				fflush(stdin);
			printf("Preco %d: ",i);
			scanf("%f",&produto[i].preco);
				fflush(stdin);
			printf("Quantidade %d: ",i);
			scanf("%d",&produto[i].qtd);
			printf("\n");	
		}
	}
	
	// Procedimento: realiza o pedido por um produto
	void pedido (Mercadoria produto[])
	{
		int i, p_codigo, p_qtd;
		
		printf("Entre com o codigo do pedido: ");
		scanf("%d",&p_codigo);
		printf("Entre com a quantidade: ");
		scanf("%d",&p_qtd);
	
		for (i = 0; i < TAM; i++) {
			if (produto[i].codigo == p_codigo) {
				if (produto[i].qtd >= p_qtd) {
					produto[i].qtd = produto[i].qtd - p_qtd;
					printf("Seu pedido:\n");
					printf("Nome: %s (codigo: %d, preco: %.2f, quantidade: %d).\n",produto[i].nome, produto[i].codigo, produto[i].preco, p_qtd);
				}
				else {
					printf("Usuario, nao existe quantidade suficiente desse produto !!\n");
				}
			}
		}
	}
	
	// Procedimento: exibe estoque de produtos
	void exibirEstoque (Mercadoria produto[]) 
	{
		int i;
		for (i = 0; i < TAM; i++) {
			printf("Nome: %s (codigo: %d, preco: %.2f, quantidade: %d).\n",produto[i].nome, produto[i].codigo, produto[i].preco, 
																		   produto[i].qtd);
		}
		
	}

// Função principal
int main ()
{
	Mercadoria produto[TAM];
	int opcao;
	
	while (1) {
		menu ();
		printf("Entre com um opcao: ");
		scanf("%d",&opcao);
		if (!opcao) break;
		
		switch (opcao){
			case 1:{
				leitura (produto);
				break;
			}
			case 2:{
				pedido (produto);
				break;
			}
			case 3:{
				exibirEstoque (produto);
				break;
			}
		}
	}
	return 0;
}
