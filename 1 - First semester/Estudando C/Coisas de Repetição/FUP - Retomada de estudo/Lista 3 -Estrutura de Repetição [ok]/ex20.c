#include <stdio.h>

int main(){
	int altura,
		i,	
		blocos,
		totalBlocos;
		
	printf("Entre com a 'altura' da piramide: ");
	scanf("%d",&altura);
	
	totalBlocos = 0;
	for(i = altura; i >= 1; i--){
		blocos = i * i;
		totalBlocos += blocos; 
	}
	printf("Total de blocos usados para construcao dessa piramide >> %d.",totalBlocos);
return 0;
}
