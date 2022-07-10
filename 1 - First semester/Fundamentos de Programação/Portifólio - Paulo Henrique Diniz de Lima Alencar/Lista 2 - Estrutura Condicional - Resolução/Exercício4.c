#include <stdio.h>

int main(){
	// Exercício 4 -
	
	float nota1, nota2, nota3, media;	

	printf("Entre com 3 notas respectivamente (Separe elas com ESPACO) >>> ");	
	scanf("%f %f %f",&nota1, &nota2, &nota3);
	
	if ( (nota1 < 10 && nota1 > 0) && (nota2 < 10 && nota2 > 0) && (nota3 < 10 && nota3 > 0) ){
		media = ( nota1 + nota2 + nota3 ) / 3;
		printf("A media = %.2f.", media);
	}
	else{
		printf("Erro: Alguma nota informada nao e valida (valor deve estar entre 0 e 10).");
	}
	

return 0;

}