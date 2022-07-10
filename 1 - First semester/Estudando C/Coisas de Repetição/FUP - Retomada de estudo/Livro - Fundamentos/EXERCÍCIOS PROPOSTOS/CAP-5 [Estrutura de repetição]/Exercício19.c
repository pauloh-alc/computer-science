#include <stdio.h>

int main(){
	
	int i,
		qtd_1000,
		qtd_200;
	float compra,
		  venda,
		  lucro,
		  lucroT;
	char acao;
	
	i = 1;
	qtd_1000 = 0;
	qtd_200 = 0;
	do{
		printf("Entre com o tipo acao %d, ou seja, uma letra: ",i);
		scanf("%c%*c",&acao);
		if(acao == 'F') break;
		printf("Entre com o preco de 'compra' da acao %d: ",i);
		scanf("%f%*c",&compra);
		printf("Entre com o preco de 'venda' da acao %d: ",i);
		scanf("%f%*c",&venda);
		
		lucro = venda - compra;
		printf("O lucro da acao %c e: %.2f.\n",acao,lucro);
		if(lucro > 1000) qtd_1000 += 1;
		if(lucro < 200) qtd_200 += 1;
		lucroT += lucro; 
	i++;
	}while(!0);
	
	printf("A quantidade de acoes com lucro superior a R$ 1.000,00: %d.\n",qtd_1000);
	printf("A quantidade de acoes com lucro inferior a R$ 200,00: %d.\n",qtd_200);
	printf("O lucro total da empresa: %.2f.\n",lucroT);
return 0;
}
