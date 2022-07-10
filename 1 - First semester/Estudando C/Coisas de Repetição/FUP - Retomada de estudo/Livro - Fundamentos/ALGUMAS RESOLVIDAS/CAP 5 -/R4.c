#include <stdio.h>

int main(){
	int soma,
		cont,
		i,
		codigo,
		veiculosPasseio,
		acidentesTransito,
		maiorA,
		menorA,
		codigoMaior,
		codigoMenor,
		soma_2000;
		
	float media,
		media_2000;
		
	soma = 0;
	cont = 0;
	soma_2000 = 0;
	for(i = 1; i <= 5 ; i++){
	printf("Entre com o 'codigo' da cidade: ");
	scanf("%d",&codigo);
	printf("Entre com o numero de 'veiculos de passeio' da cidade de codigo '%d': ",codigo);
	scanf("%d",&veiculosPasseio);
	printf("Entre com o numero de 'acidentes de transito' com vitima na cidade de codigo '%d': ",codigo);
	scanf("%d",&acidentesTransito);
	
		if(i == 1){
			maiorA = acidentesTransito;
			menorA = acidentesTransito;
			codigoMaior = codigo;
			codigoMenor = codigo;
		}
		
		if(acidentesTransito > maiorA){
			maiorA = acidentesTransito;
			codigoMaior = codigo;
		}
		if(acidentesTransito < menorA){
			menorA = acidentesTransito;
			codigoMenor = codigo;
		}
		soma = soma + veiculosPasseio;
		
		if(veiculosPasseio < 2000){
			soma_2000 = soma_2000 + acidentesTransito;
			cont++;
		}
	}
	printf("\n");
	
	media = soma / 5;
	if(cont > 0){
		media_2000 = soma_2000 / cont;
		printf("A media de acidentes de transito nas cidades com menos de 2.000 veiculos de passeio e >> %f.\n",media_2000);
	} 
	else{
		printf("Sem cidades com menos de 2.000 veiculos de passeio !!\n");
	}
	printf("Media de veiculos nas cinco cidades juntas: %f.\n",media);
	printf("Cidade %d tem maior indice de acidentes de transito >> %d.\n",codigoMaior,maiorA);
	printf("Cidade %d tem menor indice de acidentes de transito >> %d.\n",codigoMenor,menorA);
	
return 0;
}
