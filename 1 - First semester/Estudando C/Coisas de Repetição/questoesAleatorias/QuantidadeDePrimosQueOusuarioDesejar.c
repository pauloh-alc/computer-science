#include <stdio.h>


int main(){
	int n, numero, quant, i, cont;
	
	printf("Entre como um valor 'n' inteiro e positivo >>> ");
	scanf("%d",&n);
	
	quant = 0;
	numero = 1;
	
	while(quant <= n){
		
		cont = 0;
		for(i = 1; i <= numero; i++){
			if(numero % i == 0){
				cont++;
			}
		}
		if(cont == 2) {
			
			printf("%d, ",numero);
			quant++;
			if(quant == n) break;
		}
		numero += 1;	
	}
	
return 0;
}
