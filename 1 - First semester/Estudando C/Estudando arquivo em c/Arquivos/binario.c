#include <stdio.h>
	
typedef struct{
	int dia, mes, ano;
} Data;
	

typedef struct{
	char nome[30];
	Data niver;
	float peso;
} Registro;
	
	void save (char nomeArquivo[], Registro pessoas[], int n)
	{
		
		FILE *arq;
		
		arq = fopen(nomeArquivo, "w");
		
		if (arq == NULL) {
			puts("Arquivo nao criado !!\n");
			exit(1);	
		}
		// no lugar do 1, posso colocar n PESSOAS
		fwrite (&pessoas[0], sizeof(Registro),1,arq);
		
		/*
		for (i = 0; i < n; i++) {
			fprintf(arq,"%s\n%02d/%02d/%04d\n%f\n",pessoas[i].nome,
											   pessoas[i].niver.dias,
											   pessoas[i].niver.mes,
											   pessoas[i].niver.ano,
											   pessoas[i].peso);
		}
		*/
		fclose(arq);
	}
	
	
	void load (char nomeArquivo[], Registro pessoas[], int *n)
	{
		FILE *arq;
		
		arq = fopen(nomeArquivo, "r");
		
		if (arq == NULL) {
			puts("Arquivo nao criado !!\n");
			exit(1);	
		}
		fread (&pessoas[0], sizeof(Registro),1,arq);
		/*
		while(!eof(arq)) {
			fscanf(arq,"%[^\n]s"pessoas[*n].nome);
			fscanf(arq,"%s/%d/%d", &pessoas[n].niver.dias,
								   &pessoas[*n].niver.mes,
								   &pessoas[*n].niver.ano,
								   &pessoas[*n].peso);
			fgets(arq);
			
			(*n)++;
		}*/
		
		fclose(arq);
	}
int main ()
{
	
	
	Registro pessoas[30];
	int n;
	
	save("academia.data",pessoas,n);
	
	strcpy(pessoas[0].nome, "Rafael Ivo");
	pessoas[0].niver.dia = 9;
	pessoas[0].niver.mes = 4;
	pessoas[0].niver.ano = 1986;
	pessoas[0].peso = 85;
	n++;
	
	save("academia.txt",pessoas,n);
	
	load("academia.txt",pessoas,&n);
	
	for(i = 0; i < n; i++) {
		printf("")
	}
	
	return 0;
}
