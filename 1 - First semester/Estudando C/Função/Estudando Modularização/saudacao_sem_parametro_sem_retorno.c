#include <stdio.h>

// Função sem parâmetro e sem retorno: Seu principal objetivo é evitar repetição de código

void saudacao(void){
	printf("Bem-vindo ao programa Calculo Eletronico,\n");
	printf("onde seus calculos sao resolvido rapidamente\n");
	printf("Para mais informacoes e atualizacoes,\n");
	printf("Acesse o site: https://www.calculoeletronico.edu.br\n");
}

int main(){
	saudacao(); // Chamando a função 
	printf("\n");
	saudacao();
return 0;
}
