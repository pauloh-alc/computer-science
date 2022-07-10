#include <stdio.h>

int main(){
	
	float nota1, 
		nota2, 
		nota3,
		media;
	
	printf("Entre com a nota1: ");
	scanf("%f",&nota1);
	printf("Entre com a nota2: ");
	scanf("%f",&nota2);
	printf("Entre com a nota3: ");
	scanf("%f",&nota3);
	
	if((nota1 > 0 && nota1 < 10) && (nota2 > 0 && nota2 < 10) && (nota3 > 0 && nota3 < 10)){
		media = (nota1 + nota2 + nota3) / 3;
		if(media >= 7.0) printf("Aprovado - media %.2f",media);
		else if(media < 4) printf("Reprovado - media %.2f",media);
		else if(media > 4 && media < 7) printf("Recuperacao - media %.2f",media);
	}else{
		printf("Erro: alguma nota informada nao atende os requesitos !!");
	}
	
return 0;
}
