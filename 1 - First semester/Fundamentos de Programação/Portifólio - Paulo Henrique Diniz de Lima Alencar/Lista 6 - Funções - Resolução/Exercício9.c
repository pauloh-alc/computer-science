#include <stdio.h>

void combinar (int v[], int w[], int n, int m, int x[])
{
	int i, j, k;
	int menor, pos;
	// Instrução responsável por colocar os elementos de v[0..n-1] em x[0..n-1]  
	for (i = 0; i < n; i++) {
		x[i] = v[i];
	}
	// Instrução responsável por colocar os restantes do elementos no vetor x[0..(n + m)-1].
	k = 0;
	for (i = n; i < (n + m); i++) {
		x[i] = w[k];
		k += 1;
	}

	// Processo de ordenação do vetor x[0..(n + m) - 1]
	for (i = 0; i < (n + m) - 1; i++) {
		menor = x[i];
		pos = i;
		for (j = i; j < (n + m); j++) {
			if (x[j] < menor) {
				menor = x[j];
				pos = j;
			}
		}
		x[pos] = x[i];
		x[i] = menor;
	}
	// Como a passagem de vetores é feita por referência as modificações que eu fiz no vetor x[0..9] 
	// nessa função irá modificar o vetor x original.
}

int main ()  
{
	int i;
	int v[] = {1,3,5,8}, n = 4;
	int w[] = {2,4,6,7,9}, m = 5;
	int x[9];
	
	combinar (v, w, n, m, x);
	
	for (i = 0; i < (n + m); i++) {
		printf("[%d]",x[i]);
	}
	return 0;
}
