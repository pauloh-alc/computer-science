#include <stdio.h>

int main(){
	
	int gramas1,
		gramas2,
		preco1,
		preco2,
		preco,
		pacotes;
		
	printf("Entre com as 'gramas' do produto versao 1: ");
	scanf("%d",&gramas1);
	printf("Entre com o 'preco' do produto versal 1: ");
	scanf("%d",&preco1);
	
	printf("Entre com as 'gramas' do produto versao 2: ");
	scanf("%d",&gramas2);
	printf("Entre com o 'preco' do produto versal 2: ");
	scanf("%d",&preco2);
	
	if(gramas1 > gramas2){
		pacotes = gramas1 / gramas2;
		preco = pacotes * preco2;
		if(preco > preco1) printf("Produto mais vatajoso - versao 1");
		else printf("Produto mais vatajoso - versao 2");
	}
	else{
		pacotes = gramas2 / gramas1;
		preco = pacotes * preco1;
		if(preco > preco2) printf("Produto mais vatajoso - versao 2");
		else printf("Produto mais vatajoso - versao 1");
	}
	
return 0;
}
