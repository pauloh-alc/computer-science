#include <stdio.h>

int main(){
	int nota1,
		nota2,
		nota3,
		nota4;
		
	float media;
	
	printf("Entre com a nota 1: ");
	scanf("%d",&nota1);
	printf("Entre com a nota 2: ");
	scanf("%d",&nota2);
	printf("Entre com a nota 3: ");
	scanf("%d",&nota3);
	printf("Entre com a nota 4: ");
	scanf("%d",&nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4.0;
	printf("\nMedia = %.2f.\n",media);
	if(media >= 7) printf("Aprovado.\n");
	else printf("Reprovado.\n");
return 0;
}
