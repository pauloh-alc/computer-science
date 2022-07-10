#include <stdio.h>

int main(){
    int idade,
        k,
        qtd1 = 0,
        qtd2 = 0,
        qtd3 = 0,
        qtd4 = 0;

    float peso,
          media1 = 0,
          media2 = 0,
          media3 = 0,
          media4 = 0;

    k = 1;
	while(k <= 15){
		printf("Entre com a idade da pessoa %d: ",k);
		scanf("%d",&idade);
		printf("Entre com o peso  da pessoa %d: ",k);
		scanf("%f",&peso);
		
		if(idade >= 1 && idade <= 10){
			media1 = media1 + peso;
			qtd1 += 1; 	
		}
		else if(idade >= 11 && idade <= 20){
			media2 = media2 + peso;
			qtd2 += 1; 	
		}
		else if(idade >= 21 && idade <= 30){
			media3 = media3 + peso;
			qtd3 += 1; 	
		}
		else if(idade > 31){
			media4 = media4 + peso;
			qtd4 += 1; 		
		}
	k++;
	}
    if(qtd1 > 0) media1 = media1 / qtd1;
    if(qtd2 > 0) media2 = media2 / qtd2;
    if(qtd3 > 0) media3 = media3 / qtd3;
    if(qtd4 > 0) media4 = media4 / qtd4;

    printf("Media na faixa etaria 1 a 10 anos: %.2f.\n",media1);
    printf("Media na faixa etaria 11 a 20 anos: %.2f.\n",media2);
    printf("Media na faixa etaria 21 a 30 anos: %.2f.\n",media3);
    printf("Media na faixa etaria acima de 31: %.2f.\n",media4);

return 0;
}
