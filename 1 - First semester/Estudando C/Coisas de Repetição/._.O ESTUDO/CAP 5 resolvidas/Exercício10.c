#include <stdio.h>

int main(){
	// Exercício resolvidos - 10
	
	int times, jogadores;
	int idade;
	float peso, altura;
	int quantIdade18, somaIdade, quantPesos80;
	float somaAlturas, mediaIdade, mediaAlturas, porcentagem80;
	
	quantIdade18 = 0;
	somaAlturas = 0;
	quantPesos80 = 0;
	
	for(times = 1; times <= 5; times++){
	
		somaIdade = 0;
		printf("Time [%d]:\n\n", times);
		for(jogadores = 1; jogadores <= 11; jogadores++){
			
			printf("Jogador [%d] -\n", jogadores);
			printf("Entre com a idade >>> ");
			scanf("%d",&idade);
			printf("Entre com o peso >>> ");
			scanf("%f",&peso);
			printf("Entre com a altura >>> ");
			scanf("%f",&altura);
			printf("\n");
			
			if(idade < 18){
				quantIdade18++;
			}
			
			somaIdade = somaIdade + idade; // Soma das idades dos jogadores de cada time 'É necessário 'Zerar' a variável somaIdade toda vez que começa um novo time'
			somaAlturas = somaAlturas + altura;
			
			if(peso > 80) quantPesos80++;
		}
		
		mediaIdade = somaIdade / 11.0;
		printf("Media das idades dos jogadores do Time [%d] >>> %.2f. \n", times, mediaIdade);
		printf("\n");
	}
	
	mediaAlturas = somaAlturas / 55.0;
	porcentagem80 = (quantPesos80 * 100) / 55.0;
	
	printf("Quantidade de jogadores com idade inferior a 18 anos >>> %d. \n", quantIdade18);
	printf("A media das alturas de todos os jogadores do campeonado e >>> %.2f. \n", mediaAlturas);
	printf("A porcentagem de jogadores com mais de 80kg entre todos os jogadores de campeonado >>> %.2f. \n", porcentagem80);
	
return 0;
}
