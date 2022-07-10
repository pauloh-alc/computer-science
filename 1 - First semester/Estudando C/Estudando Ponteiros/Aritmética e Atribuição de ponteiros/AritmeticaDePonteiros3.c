#include <stdio.h>
#include <string.h>
#define SIZE 20
// Aritimética de ponteiros: imprimindo caracteres de uma string separando por virgula.
// Cada versão é mais otimizada que outra. Versão 5 mais otimizada.
int main ()
{
	char cor[SIZE] = "Vermelho";
	int i, n;
	char *p;
	
	// Versão 1:
	printf("Versao 1: ");
	for (i = 0; i < SIZE; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Versão 2:
	printf("Versao 2: ");
	for (i = 0; i < strlen(cor); i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Versão 3:
	n = strlen(cor);
	printf("Versao 3: ");
	for (i = 0; i < n; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Versão 4:
	/* Vamos analisar o que acontece a cada REPETIÇÃO:
	 * 2 acessos ao vetor cor[0..4]
	 * 1 comparação
	 * 1 incremento inteiro
	 * 1 operação de escrita
	 */
	printf("Versao 4: ");
	for (i = 0; cor[i] != '\0'; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Versão 5:
	/* Vamos analisar o que acontece  a cada REPETIÇÃO:
	 * 0 Acessos ao vetor. Acesso foi evitado graças ao uso de ponteiros.
	 * 1 comparação
	 * 1 incremento no ponteiro
	 * 1 operação de escrita
	*/	
	printf("Versao 5: ");
	//   p = &cor[0];
	for (p = cor; *p != '\0'; p++) {
		printf("%c,",*p);
	}
	printf("\n");
	return 0;
}
