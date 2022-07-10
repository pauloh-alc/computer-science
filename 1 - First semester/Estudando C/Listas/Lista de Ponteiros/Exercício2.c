#include <stdio.h>

int main ()
{
	int *pti;   // Declarando ponteiro
	int i = 10; // Declarando variável i e atribuindo valor 10 para a mesma
	pti = &i;	// Ponteiro *pti agora aponta para i
				// pti guarda o endereço de memória onde i está alocado.
	
	printf("pti = %p, endereco(i) = %p \n",pti,&i); // a) pti armazena endereço de i.[VERDADE]
	printf("*pti = %d \n",*pti);   					// b) *pti é iguala 10. [VERDADE]
	
	
	printf("valor(i) antes = %d \n",i);
	*pti = 20;										// c) ao se executar *pti = 20; i passará a ter valor 20. [VERDADE]
	printf("valor(i) depois = %d \n",i);
	
	i = 300;
	printf("valor(i) = %d, *pti = %d \n",i,*pti);   // d) ao se alterar o valor de i, *pti será modificado.  [VERDADE]
	
	printf("pti = %p \n",pti);                      // e) pti é igual a 10. [FALSO]
	
													// O conteúdo de pti é o Endereço onde i está alocado,
													// esse endereço pode variar de máquina para máquina ou 
													// de execução para execução.
}
