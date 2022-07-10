#include <stdio.h>

int main(){
	int i,
		idade,
		qtd90_150,
		qtd10_30_190,
		somaI;
	
	float peso,
		  altura,
		  porcentagem,
		  media;
		  
	qtd90_150 = 0;
	qtd10_30_190= 0;
	somaI = 0;	
	
	for( i = 1 ; i <= 10 ; i++ ){
		printf("Entre com a idade, peso e altura da pessoa %d respectivamente: ",i);
		scanf("%d%f%f",&idade,&peso,&altura);
		printf("\n");
		somaI = somaI + idade;
		if(peso > 90 && altura < 1.50) qtd90_150 += 1;
		if(idade >= 10 && idade <= 30 && altura > 1.90) qtd10_30_190 += 1;
	}
	media = somaI / 10.0;
	porcentagem = (qtd10_30_190 * 100) / 10.0;
	printf("A media das idades das dez pessoas: %.2f.\n",media);
	printf("A quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50 metros e: %d.\n",qtd90_150);
	printf("A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.2f%%.\n",porcentagem);
return 0;
}
