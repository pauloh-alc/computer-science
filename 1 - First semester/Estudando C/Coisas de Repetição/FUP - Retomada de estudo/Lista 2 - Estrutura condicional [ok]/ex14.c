#include <stdio.h>

int main(){
	
	int codigo,
		quantidade,
		preco,
		precoTotalNota;
		
		float precoFinal;
		
	printf("Entre com o 'codigo' do produto comprado: ");
	scanf("%d",&codigo);
	printf("Entre com a quantidade de produto comprado: ");
	scanf("%d",&quantidade);
	
	if(codigo >= 1 && codigo <= 10){
		preco = 10;
		printf("Preco unitario do produto >> %d.\n", preco);
		precoTotalNota = quantidade * preco;
		printf("Preco Tota da Nota >> %d.\n", precoTotalNota);
	}
	else if(codigo > 10 && codigo <= 20){
		preco = 15;
		printf("Preco unitario do produto >> %d.\n", preco);
		precoTotalNota = quantidade * preco;
		printf("Preco Total da Nota >> %d.\n", precoTotalNota);
	}
	else if(codigo > 20 && codigo <= 30){
		preco = 20;
		printf("Preco unitario do produto >> %d.\n", preco);
		precoTotalNota = quantidade * preco;
		printf("Preco Total da Nota >> %d.\n", precoTotalNota);
	}
	else if(codigo > 30 && codigo <= 40){
		preco = 30;
		printf("Preco unitario do produto >> %d.\n", preco);
		precoTotalNota = quantidade * preco;
		printf("Preco Total da Nota >> %d.\n", precoTotalNota);
	}
	
	if(precoTotalNota <= 250){
		printf("Desconto >> 5%%.\n");
		precoFinal = precoTotalNota - precoTotalNota * 5.0 / 100;
		printf("Preco Final com desconto >> %f.\n", precoFinal);
	}
	else if(precoTotalNota > 250 && precoTotalNota <= 500){
		printf("Desconto >> 10%%.\n");
		precoFinal = precoTotalNota - precoTotalNota * 10.0 / 100;
		printf("Preco Final com desconto >> %f.\n", precoFinal);
	}
	else if(precoTotalNota > 500){
		printf("Desconto >> 15%%.\n");
		precoFinal = precoTotalNota - precoTotalNota * 15.0 / 100;
		printf("Preco Final com desconto >> %f.\n", precoFinal);
	}
	
return 0;
}
