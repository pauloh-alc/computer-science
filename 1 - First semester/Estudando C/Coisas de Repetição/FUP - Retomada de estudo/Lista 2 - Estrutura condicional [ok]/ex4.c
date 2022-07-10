#include <stdio.h>

int main(){
	float media,
		nota1,
		nota2,
		nota3;
	
	printf("Entre com a nota1: ");
	scanf("%f",&nota1);
	printf("Entre com a nota2: ");
	scanf("%f",&nota2);
	printf("Entre com a nota3: ");
	scanf("%f",&nota3);
	
	if(nota1 <= 0 || nota1 >= 10 || nota2 <= 0 || nota2 >= 10 || nota3 <= 0 || nota3 >= 10){
		printf("Erro: alguma nota nao atende os requesitos !!!");
	}else{
		media = (nota1 + nota2 + nota3) / 3; 
		printf("Media = %.2f",media);
	}

return 0;
}
