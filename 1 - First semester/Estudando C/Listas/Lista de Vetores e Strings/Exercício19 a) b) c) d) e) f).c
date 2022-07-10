#include <stdio.h>

	// Procedimento: exibe menu de exibição
	void menu ()
	{
		printf("\n");
		puts("[1] a) Calcula a quantidade de caracteres em um string.");
		puts("[2] b) Copia uma string para outra.");
		puts("[3] c) Compara se duas strings sao iguais.");
		puts("[4] d) Concatena duas strings.");
		puts("[5] e) Inverte uma string.");
		puts("[6] f) Uma substring indicando o inicio e o tamanho.");
		printf("\n");
	}
	
	// Função: retorna a quantidade de caractere de uma string.
	int qtdCaracteres ()
	{
		char string[50];
		int i;
	
		printf("Entre com uma string qualquer: ");
		fflush(stdin);
		scanf("%[^\n]s",string);
		
		i = 0;
		while (string[i] != '\0') i++;
		
	return i;
	}
	
	// Função: Copia uma string para outra.
	void copiaString ()
	{
		int i;
		char string1[50]; 
		char string2[50];
		
		printf("Entre com uma string1: ");
			fflush(stdin);
		scanf("%[^\n]s",string1);
		printf("Entre com uma string2: ");
			fflush(stdin);
		scanf("%[^\n]s",string2);
		
		i = 0;
		while (string1[i] != '\0') {
			string2[i] = string1[i];
		i++;
		}
		string2[i] = '\0';
		
		printf("string2 agora e: %s \n",string2);
	}
	
	// Função: compara duas strings
	int comparaString ()
	{
		int i, valor;
		char string1[50], string2[50];
		
		printf("Entre com uma string1: ");
			fflush(stdin);
		scanf("%[^\n]s",string1);
		printf("Entre com uma string2: ");
			fflush(stdin);
		scanf("%[^\n]s",string2);
		i = 0;
		while (string1[i] != '\0' || string2[i] != '\0') {
			
			if      (string1[i] == string2[i]) valor = 0;
			else if (string1[i] < string2[i])  valor = -1;
			else if (string1[i] > string2[i])  valor = 1;
		i++;
		}
	
	return valor;
	}
	
	// Procedimento: concatena duas strings
	void concatenaString ()
	{
		int i, n;
		char string1[50]; 
		char string2[50];
		char concatenacao[100];
		
		printf("Entre com uma string1: ");
			fflush(stdin);
		scanf("%[^\n]s",string1);
		printf("Entre com uma string2: ");
			fflush(stdin);
		scanf("%[^\n]s",string2);
		
		i = 0;
		while (string1[i] != '\0') {
			concatenacao[i] = string1[i];
		i++;
		}
		n = 0;
		while (string2[n] != '\0') {
			concatenacao[i] = string2[n];
			n++; 
		i++;
		}
		concatenacao[i] = '\0';
		
		printf("As strings concatenadas formam: %s \n",concatenacao);
	}
	// Procedimento: inverte uma string
	void inverte ()
	{
		char string[50], invertida[50];
		int lenght = 0, n = 0, i;
		
		fflush(stdin);
		printf("Entre com um string para inverte-la: ");
		scanf("%[^\n]s",string);
		
		lenght = 0;
		while (string[lenght] != '\0') lenght++;
		
		invertida[lenght] = '\0';
		for (i = lenght - 1; i >= 0; i--) {
			invertida[i] = string[n];
			n++;
		}
		
		i = 0;
		while (invertida[i] != '\0') {
			printf("%c",invertida[i]);
		i++;
		}
		printf("\n");
	}
	
	// Procedimento: obtém uma substring pegando inicio e tamanho.
	void substring ()
	{
		int i, inicio, tamanho = 0, permitir = 0;
		char string[50], substring[50];
		
		fflush(stdin);
		printf("Entre com um string: ");
		scanf("%[^\n]s",string);
		
		i = 0;
		while (string[i] != '\0') {
			if (string[i] == ' ') {
			 	inicio = i + 1;
				permitir = 1;
			}
			if (string[i] != ' ' && permitir == 1) {
				substring[tamanho] = string[i];
				tamanho++;
			}
		i++;
		}
		substring[tamanho] = '\0';
		
		printf("Inicio: %d, tamanho %d, substring:%s \n", inicio, tamanho, substring);
	}
	
// Função: principal
int main () {
	// Dicionário de dados:
	int opcao;
	
	while (!0) {
		menu ();
		printf("Opcao: ");
		scanf("%d",&opcao);
		if (!opcao) break;
		
		switch (opcao) {
			case 1:{
				int qtd = qtdCaracteres ();
				printf("Quantidade de caracteres da string digitada e: %d \n",qtd);
				break;
			}
			case 2:{
				copiaString ();
				break;
			}
			case 3:{
				int valor = comparaString ();
				if 		(!valor)      printf("string1 == string2. \n");
				else if (valor == -1) printf("string1 < string2. \n ");
				else if (valor) 	  printf("string1 > string2. \n");
				break;
			}
			case 4:{
				concatenaString ();
				break;
			}
			case 5:{
				inverte ();
				break;
			}
			case 6:{
				substring ();
				break;
			}
		}
	}
	return 0;
}
