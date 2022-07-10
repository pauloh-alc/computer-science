#include <stdio.h>
#include <math.h>

int main(){
	// 17°
	
	float usado_marco, valor_pago, usado_abril, fatura_abril, restante;

	printf("Entre com o valor usado no mes de MARCO >>");
		scanf("%f",&usado_marco);
	printf("Entre com o valor que voce pagou dessa FATURA >>");
		scanf("%f",&valor_pago);
	printf("Entre com o valor usado no mes de ABRIL >>");
		scanf("%f",&usado_abril);
	
	restante = usado_marco - valor_pago;

	fatura_abril = usado_abril + restante + (restante * 3.3/100);
	printf("A Fatura do mes de ABRIL e = %.3f.",fatura_abril);
	return 0;

}