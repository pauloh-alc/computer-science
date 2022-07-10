#include <stdio.h>

int main(){
	
	int i,
		idade,
		qtd_50,
		qtd_p,
		qtd10_20;
		
	float altura,
		  peso,
		  somaA,
		  media,
		  porcentagem;
		  	
	somaA = 0;	
	i = 1;
	qtd_50 = 0;
	qtd_p = 0;
	qtd10_20 = 0;
	while(i <= 5){
		printf("Entre com a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		printf("Entre com a altura da pessoa %d: ",i);
		scanf("%f",&altura);
		printf("Agora entre com o peso da pessoa %d: ",i);
		scanf("%f",&peso);
		if(idade > 50) qtd_50 += 1;
		if(idade >= 10 && idade <= 20){
			somaA += altura;
			qtd10_20 += 1;
		}
		if(peso < 40){
			qtd_p += 1;
		}  
	i++;
	printf("\n");	
	}
	if(qtd10_20 > 0) media = somaA / qtd10_20; 
	porcentagem = (qtd_p * 100) / 5.0; 
	printf("Quantidade de pessoas com idade superior a 50 anos: %d.\n",qtd_50);
	printf("A media das alturas das pessoas com idade entre 10 e 20: %.2f.\n",media);
	printf("A porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas: %.2f%%.",porcentagem);
	
return 0;
}
