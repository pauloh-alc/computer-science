#include <stdio.h>
#define SIZE 4
int main()
{
	int A[SIZE][SIZE] = {{3,2,3,4},
						 {1,0,3,4},
						 {2,2,3,4},
						 {1,2,1,4}};
						 
	int B[SIZE][SIZE] = {{1,2,3,4},
						 {3,2,7,4},
						 {0,4,3,1},
						 {1,2,0,4}};
	
	int C[SIZE][SIZE] = {{0,0,0,0},
						 {0,0,0,0},
						 {0,0,0,0},
						 {0,0,0,0}};
	int i, j, k;
	
	
	// Processamento: 
	for (i = 0; i < SIZE; i++) {							// 'i' varia mais devagar que 'j' e 'k'.
		for (j = 0; j < SIZE; j++) {						// 'j' varia mais que 'i' e menos que 'k'.
			for (k = 0; k < SIZE; k++) {					// 'k' é o que varia mais rápido.
				C[i][j] = C[i][j] + (A[i][j] * B[k][i]);
			}
		}
	}
	
	printf("C:\n\n");
	for (i = 0; i < SIZE; i++) {
		printf("| ");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",C[i][j]);
		}
		printf("   |\n");
	}
	
return 0;
}
