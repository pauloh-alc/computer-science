// Ciência da Computação 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matrícula - 494837.
// Questão 3:
#include <stdio.h>

int main(){
	// Dicionário de dados:
	int N;
	int i, j;
	int pode_1, pode_0;
	
	// Entrada de dados:
	printf("Entre com o valor de 'N': ");
	scanf("%d",&N);
	
	// Processamento:
	for(i = 1; i <= N; i++){
		for(j = 1; j <= i; j++){
			pode_1 = 0;
			pode_0 = 0;
			// 1
			if(i % 2 == 0 && j % 2 == 0){ // 'i' par e 'j' par
				pode_1 = 1;
			}
			if(i % 2 != 0 && j % 2 != 0){// i' impar e 'j' impar
				pode_1 = 1;
			}
			
			// 0
			if(i % 2 == 0 && j % 2 != 0){ // 'i' par e 'j' impar
				pode_0 = 1;
			}
			if(i % 2 != 0 && j % 2 == 0){ // 'i' impar e 'j' par
				pode_0 = 1;
			}
			
			// Saída: imprimindo
			if(pode_1 == 1) printf("1");
			else if(pode_0 == 1) printf("0");
		}
		printf("\n");
	}

return 0;
}
