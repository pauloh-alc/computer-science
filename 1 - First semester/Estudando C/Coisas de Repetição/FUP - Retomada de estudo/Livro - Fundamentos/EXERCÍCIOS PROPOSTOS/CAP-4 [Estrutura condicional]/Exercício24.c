#include <stdio.h>

int main(){
	
	float preco, aumento;
	int categoria;
	char situacao;
	
	printf("Entre com o 'preco' do produto: ");
	scanf("%f%*c",&preco);
	puts("1. Limpeza.");
	puts("2. Alimentacao.");
	puts("3. Vestuario.");
	printf("Entre com a 'catedoria' do produto: ");
	scanf("%d%*c",&categoria);
	puts("R - produtos que precisam de refrigeracao. ");
	puts("N - produtos que nao necessitam de refrigeracao. ");
	printf("Entre com a 'situacao' do produto: ");
	scanf("%c%*c",&situacao);
	
	if(preco <= 25){
		if(categoria == 1){
			aumento = preco * 5.0 / 100;
			preco = preco + (preco * 5 / 100) - (preco * 8 / 100);
			printf("Aumento - 5%%, equivale = %.4f.\n",aumento);
		}
		else if(categoria == 2){
			aumento = preco * 8.0 / 100;
			if(situacao == 'R'){
				preco = preco + (preco * 8 / 100) - (preco * 5 / 100);
			}
			else if(situacao == 'N'){
				preco = preco + (preco * 8 / 100) - (preco * 8 / 100);
			}
			printf("Aumento - 8%%, equivale = %.2f.\n",aumento);
		}
		else if(categoria == 3){
			aumento = preco * 10.0 / 100;
			preco = preco + (preco * 10 / 100) - (preco * 8 / 100);
			printf("Aumento - 10%%, equivale = %.2f.\n",aumento);
		}

	}
	else{
		if(categoria == 1){
			aumento = preco * 12.0 / 100;
			preco = preco + (preco * 12 / 100) - (preco * 8 / 100);
			printf("Aumento - 12%%, equivale = %.2f.\n",aumento);
		}
		else if(categoria == 2){
			aumento = preco * 15.0 / 100;
			if(situacao == 'R'){
				preco = preco + (preco * 15 / 100) - (preco * 5 / 100);
			}
			else if(situacao == 'N'){
				preco = preco + (preco * 15 / 100) - (preco * 8 / 100);
			}
			printf("Aumento - 15%%, equivale = %.2f.\n",aumento);
		}
		else if(categoria == 3){
			aumento = preco * 18 / 100;
			preco = preco + (preco * 18 / 100) - (preco * 8 / 100);
			printf("Aumento - 18%%, equivale = %.2f.\n",aumento);
		}
	}
	
	if(preco <= 50) printf("Classificacao - Barato.\n");
	else if(preco > 50 && preco < 120) printf("Classificacao - Normal.\n");
	else printf("Classificacao - Caro.\n");
	printf("Novo preco do produto: %.2f.\n",preco);
	
return 0;
}
