#include <stdio.h>

int main(){
	float nota1,
		  nota2;
	
	float media;
	
	printf("Entre com a primeira nota: ");
	scanf("%f",&nota1);
	printf("Entre com a segunda nota: ");
	scanf("%f",&nota2);
	media = (nota1 + nota2) / 2.0;
	printf("\nMedia = %.2f.\n",media);
	if(media >= 0 && media < 3)	printf("Reprovado.\n");
	else if(media >= 3 && media < 7) printf("Exame.\n");
	else if(media >= 7 && media <= 10) printf("Aprovado.\n");
	
return 0;
}
