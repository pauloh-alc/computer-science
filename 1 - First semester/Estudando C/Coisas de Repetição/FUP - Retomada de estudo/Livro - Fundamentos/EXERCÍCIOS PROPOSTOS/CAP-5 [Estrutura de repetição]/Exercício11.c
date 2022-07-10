#include <stdio.h>

int main(){
	int i,
		j,
		acrescimo;
		
	float valorCarro,
		  valorParcela,
		  precoVista;
	
	printf("Entre com o valor do carro: ");
	scanf("%f",&valorCarro);
	
	precoVista = valorCarro - valorCarro * 20 / 100.0;
	printf("Carro a vista custa: %.2f.\n",precoVista);
	
	i = 6;
	acrescimo = 3;
	while(i <= 60){
		valorCarro = valorCarro + valorCarro * acrescimo / 100.0;
		valorParcela = valorCarro / i;
		printf("Preco final do carro: %.2f.\n",valorCarro);
		printf("Carro em %dx: \n",i);
		j = 1;
		while(j <= i){
			printf("%d parcela = %.2f.\n",j,valorParcela);
		j++;
		}
	i = i + 6;
	acrescimo += 3;
	printf("\n");
	}
return 0;
}
