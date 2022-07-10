#include <stdio.h>

int main(){
	// Exercício 20
	int h, i, quant, blocosCamada;
	
	printf("Entre com a 'altura' da sua piramide >>> ");
	scanf("%d",&h);
	
	quant = 0;
	for(i = h; i > 0; i--){
		blocosCamada = i * i;
		quant = quant + blocosCamada;
	}
	
	printf("A quantidade de blocos usados para construcao = %d. \n", quant);

return 0;
}
