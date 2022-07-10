#include <stdio.h>

int main(){
	
	int idade, 
		i,
		qtd_150,
		qtd50_60,
		qtdR_A,
		qtd_a;
		
	float altura,
		  peso,
		  media,
		  somaI,
		  porcentagem;
		  
	char corOlhos,
		 corCabelos;
		 
	i = 1;
	somaI = 0;
	qtd_150 = 0;
	qtd50_60 = 0;
	qtdR_A  = 0;
	qtd_a = 0;
	while(i <= 6){
		
		printf("Entre com a idade da pessoa %d: ",i);
		scanf("%d%*c",&idade);
		printf("Entre com a altura da pessoa %d: ",i);
		scanf("%f%*c",&altura);
		printf("Agora entre com o peso da pessoa %d: ",i);
		scanf("%f%*c",&peso);
		printf("Entre com a cor dos olhos (A - azul; P - preto; V - verde) da pessoa %d: ",i);
		scanf("%c%*c",&corOlhos);
		printf("Entre com a cor dos cabelos (P - preto; C - castanho; L - louro; R - ruivo) da pessoa %d: ",i);
		scanf("%c%*c",&corCabelos);
		
		if(idade > 50 && peso < 60) qtd50_60 += 1;
		if(altura < 1.50){
			somaI += idade;
			qtd_150 += 1; 
		}
		if(corOlhos == 'A') qtd_a += 1;
		if(corCabelos == 'R' && corOlhos != 'A') qtdR_A += 1;

	i++;
	printf("\n");	
	
	}
	
	if(qtd_150 > 0) media = somaI / qtd_150;
	porcentagem = (qtd_a * 100) / 6.0;
	printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d.\n",qtd50_60);
	printf("A media das idades das pessoas com altura inferior a 1,50 m: %.2f.\n",media);
	printf("A porcentagem de pessoas com olhos azuis entre todas as pessoas analizadas e: %.2f%%.\n",porcentagem);
	printf("Quantidade das pessoas ruivas que nao possuem olhos azuis: %d.\n",qtdR_A);
	
return 0;
}
