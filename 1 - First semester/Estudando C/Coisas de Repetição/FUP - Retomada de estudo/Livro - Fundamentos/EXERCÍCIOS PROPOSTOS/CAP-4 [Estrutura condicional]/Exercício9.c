#include <stdio.h>

int main(){
	float saldoMedio, valorCredito;
	printf("Entre com o 'saldo medio' de um determinado cliente: ");
	scanf("%f",&saldoMedio);
	
	if(saldoMedio > 400) valorCredito = saldoMedio * 30 / 100;
	else if(saldoMedio > 300 && saldoMedio <= 400) valorCredito = saldoMedio * 25 / 100;
	else if(saldoMedio > 200 && saldoMedio <= 300 )  valorCredito = saldoMedio * 20 / 100;
	else valorCredito = saldoMedio * 10 / 100;
	
	printf("Valor do Saldo Medio e >>> %.2f.\n", saldoMedio);
	printf("Valor do Valor de Credito >>> %.2f \n", valorCredito);
return 0;
}
