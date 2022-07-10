#include <stdio.h>

int main(){
	int i, numero;
	int maior, menor;
	int teste = 0;
	i = 0;
	printf("Entre com um valor inteiro e positivo: ");
	scanf("%d",&numero);
	if(numero < 0) printf("Erro: voce entrou com um valor negativo !!\n");
	
	if(numero > 0){
		menor = numero;
		maior = numero;
		i++;
	}
	else{
		menor = 10000;
		maior = -10000;
	}
	
	while(numero != 0){
		printf("Entre com um valor inteiro e positivo: ");
		scanf("%d",&numero);
		if(numero < 0) printf("Erro: voce entrou com um valor negativo !!\n");
		
		if(numero > 0){
			i++;
			if(numero > maior) maior = numero;
			if(numero < menor) menor = numero;
			teste = 1;
		}
	}
	if(teste == 1){
		printf("Maior: %d.\n",maior);
		printf("Menor: %d.\n",menor);
	}
	else{
		printf("Numero negativos e iguais a zero nao entram no calculos !! me parece que voce digitou somente isso.\n");
	}
	
return 0;
}
