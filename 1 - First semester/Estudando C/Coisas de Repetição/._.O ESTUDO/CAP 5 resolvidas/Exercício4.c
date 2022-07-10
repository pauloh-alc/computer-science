#include <stdio.h>

int main(){
	// Exercício resolvidos - 4
	
	int i;
	int codigoCidade, veiculosPasseio, acidentesVitimas;
	int maiorIndice, menorIndice;
	int codigoMaior, codigoMenor;
	int quantidade;
	float somaVeiculos, somaAcidentesVitimas;
	float mediaVeiculos, mediaAcidentes2000;
	
	quantidade = 0;
	somaVeiculos = 0;
	somaAcidentesVitimas = 0;
	
	for(i = 1; i <= 5; i += 1){
		printf("Entre com o 'codigo' da cidade %d >>>",i);
		scanf("%d",&codigoCidade);
		
		printf("Entre com o 'numero de veiculo de passeio' da cidade %d >>>",i);
		scanf("%d",&veiculosPasseio);
		
		printf("Entre com o 'numero de acidentes de transito com vitimas' na cidade %d >>>",i);
		scanf("%d",&acidentesVitimas);	
		
		if(i == 1){ // Só acessa essa 'codição' 1 única vez, para atribuir os valores; 
			maiorIndice = acidentesVitimas;
			menorIndice = acidentesVitimas;
			
			codigoMaior = codigoCidade;
			codigoMenor = codigoCidade;	
		}
		
		if(acidentesVitimas > maiorIndice){
			maiorIndice = acidentesVitimas;
			codigoMaior = codigoCidade;
		}
		
		if(acidentesVitimas < menorIndice){
			menorIndice = acidentesVitimas;
			codigoMenor = codigoCidade;
		}
		somaVeiculos += veiculosPasseio;
		
		if(veiculosPasseio < 2000){
			somaAcidentesVitimas += acidentesVitimas;
			quantidade += 1;
		}
		printf("\n");
	}
	
	mediaVeiculos = somaVeiculos / 5.0;

	if(quantidade > 0) mediaAcidentes2000 = somaAcidentesVitimas / quantidade;
	
	printf("O maior indice de acidentes de transito e %d e pertece a cidade %d. \n", maiorIndice, codigoMaior);
	printf("O menor indice de acidentes de transito e %d e pertece a cidade %d. \n\n", menorIndice, codigoMenor);
	printf("A media de veiculos nas 5 cidades juntas e %.2f. \n", mediaVeiculos);
	printf("A media de acidentes de transito nas cidades com menos de 2.000 veiculos de passeio e %.2f.\n", mediaAcidentes2000);
	
return 0;
}
