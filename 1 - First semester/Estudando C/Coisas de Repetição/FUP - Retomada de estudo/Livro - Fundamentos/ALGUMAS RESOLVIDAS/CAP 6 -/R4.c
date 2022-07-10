#include <stdio.h>

int main(){
	
	int x1, x2;
	int i;
	int vetor1[8];
	int vetPs[8];
	int vetNeg[8];
	
	x1 = 0;
	x2 = 0;
	printf("Preechimento do primeiro Vetor: \n");
	for(i = 0; i < 8; i++){
		printf("%d = ",i);
		scanf("%d",&vetor1[i]);
		if(vetor1[i] >= 0){
			vetPs[x1] = vetor1[i];
			x1++;
		}
		else{
			vetNeg[x2] = vetor1[i];
			x2++;
		}
	}
	
	printf("\n");
	
	if(x1 == 0){
		printf("Vetor dos negativos vazio !!\n");
	}
	else{
		printf("Vetor dos Positivos:\n");
		for(i = 0; i < x1; i++){
			printf("%d = [%d].\n",i,vetPs[i]);
		}
	}
	
	printf("\n");
	
	if(x2 == 0){
		printf("Vetor dos negativos vazio !!\n");
	}
	else{
		printf("Vetor dos Negativos:\n");
		for(i = 0; i < x2; i++){
			printf("%d = [%d].\n",i,vetNeg[i]);
		}
	}
	
return 0;
}
