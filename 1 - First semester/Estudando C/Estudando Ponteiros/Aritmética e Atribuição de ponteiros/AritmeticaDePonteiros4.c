#include <stdio.h>
// Aritimética de ponteiros: imprimindo elementos de um vetor com ponteiros.
int main ()
{	
	int v[5] = {1,2,3,4,5};
	int *f = &v[5];       // v = [1][2][3][4][5][ ][ ][ ]
						//        0  1  2  3  4  5 
	int *i;
	
	for (i = v; i < f; i++) {
		printf("[%d] \n",*i);
	}
	
	// Como um vetor é alocado sequencialmente na memória, podemos comparar
	// vetores e saber quem está antes e depois. Por isso fiz a comparar i < f (feita uma comparação de endereços de memória).
	
	return 0;
}
