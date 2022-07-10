// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Questão 2:
#include <stdio.h>

int main(){
	// Dicionário de dados:
	int HoraAtual, MinutosAtual;
	int HoraDespertador, MinutosDespertador;
	int  restamH, restamM;
	int horaAtualMin, horaDespertadorMin;
	
	// Entrada de dados:
	printf("Entre com a 'hora atual' abaixo \n");
	printf("Digite as 'horas' no formato (HH): ");
	scanf("%d",&HoraAtual);
	printf("Digite os 'minutos' no formato (MM): ");
	
	scanf("%d",&MinutosAtual);
	printf("\n");
	
	printf("Entre com a 'hora do dispertador' abaixo \n");
	printf("Digite as 'horas' no formato (HH): ");
	scanf("%d",&HoraDespertador);
	printf("Digite os 'minutos' no formato (MM): ");
	scanf("%d",&MinutosDespertador);
	
	// Processamento:
	
	if(HoraAtual > HoraDespertador){
		horaAtualMin = HoraAtual * 60 + MinutosAtual;
		horaDespertadorMin = HoraDespertador * 60 + MinutosDespertador;
		restamH  = ((24 * 60) + (horaDespertadorMin - horaAtualMin)) / 60;	
	}
	else if(HoraAtual < HoraDespertador){
		horaAtualMin = HoraAtual * 60 + MinutosAtual ;
		horaDespertadorMin = HoraDespertador * 60 + MinutosDespertador;
		restamH  = (horaDespertadorMin - horaAtualMin) / 60;
	}
	
	if(MinutosAtual > MinutosDespertador){
		restamM = (60 - MinutosAtual) + MinutosDespertador ;
	}
	else if(MinutosAtual <= MinutosDespertador){
		restamM = MinutosDespertador - MinutosAtual;
	}
	
	// Saída:
	printf("\nAgora: %d:%d\n",HoraAtual,MinutosAtual);
	printf("Despertador: %d:%d \n",HoraDespertador,MinutosDespertador);
	printf("Restam %d:%d ate despertar ! \n",restamH,restamM);
return 0;
}
