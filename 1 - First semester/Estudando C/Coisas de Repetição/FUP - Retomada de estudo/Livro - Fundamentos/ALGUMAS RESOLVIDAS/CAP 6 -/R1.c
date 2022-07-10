#include <stdio.h>

int main(){
	
	int cont,i,j;
	int vetor[9];
	
	for(i = 0; i < 9; i++){
		printf("Informe um numero para vetor na posicao %d: ",i);
		scanf("%d",&vetor[i]);
	}
	printf("\n");
	for(i = 0; i < 9; i++){
		cont = 0;
		for(j = 1; j <= vetor[i]; j++){
			if(vetor[i] % j == 0){
				cont = cont + 1;
			}
		}
		if(cont == 2) printf("vetor na posicao %d = [%d] eh 'PRIMO'.\n",i,vetor[i]);
	}
	
return 0;
}
