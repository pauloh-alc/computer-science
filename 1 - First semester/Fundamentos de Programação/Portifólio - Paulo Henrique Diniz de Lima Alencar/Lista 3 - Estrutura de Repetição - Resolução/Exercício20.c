#include <stdio.h>

int main(){
	// Exercício 20 - 
	
	int altura, quantidade, blocos, i;
	
	printf("Entre com a altura da piramide de base quadrada>>> ");
	scanf("%d",&altura);
	
	quantidade = 0;
	for(i = altura; i > 0; i--){
		printf("i = %d\n", i);
		blocos = i * i;
		quantidade = quantidade + blocos; 	
	}
	
	printf("Quantidade de blocos usados na construcao da piramide e = %d.\n", quantidade);

return 0;
}
