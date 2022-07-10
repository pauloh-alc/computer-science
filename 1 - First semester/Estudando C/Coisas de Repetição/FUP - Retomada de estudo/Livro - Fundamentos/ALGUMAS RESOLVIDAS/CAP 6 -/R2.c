#include <stdio.h>

int main(){
	
	float preco[10];
	int quantidade[10];
	int i, posicao;
	float produtoMaisVendido, valorGeral, valorVendedor; 
	
	for(i = 0; i < 10; i++){
		printf("Entre com o preco do produto %d: ",i);
		scanf("%f",&preco[i]);
		printf("Entre com a quantidade do produto %d: ",i);
		scanf("%d",&quantidade[i]);
		printf("\n");
	}
	
	valorGeral = 0;
	printf("\n|Relatorio|\n");
	
	for(i = 0; i < 10; i++){
	
		printf("Produto na posicao %d:\n",i);
		printf("Quantidade: %d.\n",quantidade[i]);
		printf("Valor: %f.\n",preco[i]);
		printf("\n");
		
		valorGeral = valorGeral + (quantidade[i] * preco[i]);
		
		if(i == 0){
			produtoMaisVendido = preco[i];
			posicao = i; 
		}
		
		if(quantidade[i] > produtoMaisVendido){
			produtoMaisVendido = preco[i];
			posicao = i;
		}
	}
	
	valorVendedor = valorGeral * 5 / 100;
	printf("'Valor Geral das Vendas' e: %.2f.\n",valorGeral);
	printf("'Valor da comissao paga ao vendedor' e: %.2f.\n",valorVendedor);
	printf("'O valor do objeto mais vendido' e: %.2f, na 'posicao' %d.\n",produtoMaisVendido,posicao);
return 0;
}
