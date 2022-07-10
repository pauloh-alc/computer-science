#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOME_ARQUIVO "sprintf.txt"
#define TAM_STR 50

int main ()
{
	// Dicionário de dados:
	float real;
	char carac;
	char str[TAM_STR];

	// Entrada de dados:
	/*
	printf("Entre com seu nome: ");
	gets(str);
	//scanf("[^\n]s",str); 
	///getchar();
	printf("Entre com um caratere: ");
	scanf("%c",&carac);
	printf("Entre com um numero real: ");
	scanf("%f",&real);
	*/
	FILE *arq; // variável apontador do tipo arquivo.
	
	//strcpy (str,"teste para string");
	
	if (!(arq = fopen (NOME_ARQUIVO,"r"))) {
		printf("Erro na abertura de arquivos !\n");
		exit(1);
	}
	// Escrita em arquivos
	//fprintf (arq,"%f\nstring constante\n%s\n%c\n",real,str,carac);
	
	fscanf(arq,"%f\n%s\n%c\n",&real,str,&carac); // [Leitura de informações]
	printf("%f\n%s\n%c\n",real,str,carac);       // [Imprimindo o que fscanf terminou de ler] 
	
	fclose(arq); // [Fechando arquivo]
	return 0;
}
