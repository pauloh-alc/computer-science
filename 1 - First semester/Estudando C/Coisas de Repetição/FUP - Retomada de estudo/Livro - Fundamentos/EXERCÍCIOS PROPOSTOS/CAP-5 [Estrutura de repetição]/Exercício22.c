#include <stdio.h>

int main(){
	int i,
		idade,
		qtd;
	
	float altura,somaA, media;
	
	somaA = 0;	
	qtd = 0;
	i = 1;
	do{
		printf("Entre com a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		printf("Entre com a altura da pessoa %d: ",i);
		scanf("%f",&altura);
		if(idade > 50){
			somaA = somaA + altura;
			qtd++;
		}
	i++;	
	}while(idade > 0);
	
	if(qtd > 0) media = somaA / qtd;
	
	printf("A media das alturas das pessoas com mais de 50 anos e: %.2f.\n",media);
	
return 0;
}
