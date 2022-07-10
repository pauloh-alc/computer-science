#include <stdio.h>

int main(){
	int valorInicial,
		razao,
		quantidade,
		i;
		
	printf("Entre com o 'valor inicial'  da PA: ");
	scanf("%d",&valorInicial);
	printf("Entre com a 'razao' da PA: ");
	scanf("%d",&razao);
	printf("Entre com a 'quantidade de elementos' da PA: ");
	scanf("%d",&quantidade);
	
	for(i = 1; i <= quantidade; i++){
		printf("%d",valorInicial);
		valorInicial = valorInicial + razao;  
		if(i < quantidade) printf(", ");
		if(i == quantidade) printf(".");
	}
return 0;
}
