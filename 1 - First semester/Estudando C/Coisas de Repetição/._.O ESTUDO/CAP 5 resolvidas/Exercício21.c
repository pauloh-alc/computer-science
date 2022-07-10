#include <stdio.h>

int main(){
	// Exercício resolvidos - 21
	
	int numero, quantNumeros, maiorNumero, menorNumero, memoriaSoma, somaPares, quantPares, quantImpar;
	float mediaDigitados, mediaPares, porcentagemImpar;
	
	quantNumeros = 0;
	quantPares = 0;
	quantImpar = 0;
	memoriaSoma = 0;
	somaPares = 0;
	do{
		
		printf("Entre com um 'numero' >>> ");
		scanf("%d",&numero);
		
		if(numero != 30000){
			
			if(quantNumeros == 0){
				maiorNumero = numero;
				menorNumero = numero;
			}
			if(numero > maiorNumero) maiorNumero = numero;
			if(numero < menorNumero) menorNumero = numero;
			
			
			memoriaSoma = memoriaSoma + numero;
			
			if(!(numero % 2)){
				somaPares = somaPares + numero;
				quantPares++;
			} 
			else{
				quantImpar++;	
			} 
			quantNumeros++;
		}
	}while(numero != 30000);
	
	if(quantNumeros != 0 || numero != 30000){
	printf("A soma dos numero digitados e [%d]. \n", memoriaSoma);
	printf("A quantidade de numeros digitados e [%d]. \n", quantNumeros);
	if(quantNumeros > 0) mediaDigitados = memoriaSoma / quantNumeros;
	else mediaDigitados = 0;
	printf("A media dos numeros digitados e [%.2f]. \n", mediaDigitados);
	printf("O maior numero digitado foi [%d]. \n", maiorNumero);
	printf("O menor numero digitado foi [%d]. \n", menorNumero);
	if(quantPares > 0) mediaPares = somaPares / quantPares;
	else mediaPares = 0;
	printf("A media dos numeros pares e [%.2f]. \n", mediaPares);
	porcentagemImpar = (quantImpar * 100) / quantNumeros;
	printf("A porcentagem  dos numeros impares entre todos os numeros digitados e [%.2f%%]", porcentagemImpar);
	}
	else printf("Erro: voce entrou com o valor 30.000 logo na primeira entrada.");
return 0;
}
