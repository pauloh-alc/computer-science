#include <stdio.h>

int main () {
	// Dicionário de dados:
	char nome_completo[50];
	char citacao[50];
	int i, n, permitir;
	
	// Entrada de dados:
	printf("Entre com seu nome e sobrenome respectivamente: ");
	scanf("%[^\n]s",nome_completo);
	
	// Processamento:
	i = 0;
	n = 0;
	permitir = 0;
	while (nome_completo[i] != '\0') {
		if(nome_completo[i] == ' ') {
			permitir = 1;
			i = i + 1;
		}
		if (permitir == 1) {
			citacao[n] = nome_completo[i];
			n += 1; 
		}
	i++;	
	}
	
	citacao[n] = ','; 			   n = n + 1;  // Colocando virgula após o sobrenome.
	citacao[n] = ' '; 			   n = n + 1;  // Colocando epaço após a virgula.
	citacao[n] = nome_completo[0]; n = n + 1;  // Colocando primeiro caractere do nome.
	citacao[n] = '.';              n = n + 1;  // Colocando ponto final.
	citacao[n] = '\0'; 						   // colocando terminador no final da string
	
	// Saída: imprimindo citação
	i = 0; 
	while (citacao[i] != '\0') {
		printf("%c",citacao[i]);
	i++;
	}
	return 0;
}
