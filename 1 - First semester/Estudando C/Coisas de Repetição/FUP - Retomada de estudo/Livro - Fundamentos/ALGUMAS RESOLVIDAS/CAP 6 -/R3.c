#include <stdio.h>

int main(){
	
	int vetor1[10];
	int vetor2[10];
	int intercalacao[20];
	int i,x1,x2;
	
	i = 0;
	printf("Vetor 1:\n");
	while(i < 10){
		printf("%d = ",i);
		scanf("%d",&vetor1[i]);
		i++;
	}
	
	i = 0;
	printf("Vetor 2:\n");
	while(i < 10){
		printf("%d = ",i);
		scanf("%d",&vetor2[i]);
		i++;
	}
	
	i = 0;
	x1 = 0;
	x2 = 0;
	while(i < 20){
		if(i % 2 == 0){
			intercalacao[i] = vetor1[x1];
			x1++;
		}
		else {
			intercalacao[i] = vetor2[x2];
			x2++;
		}
		i++;
	}
	
	i = 0;
	printf("\nIntercalacao entre vetor1 e vetor2:\n");
	while(i < 20){
		printf("[%d] = %d.\n",i,intercalacao[i]);
		i++;
	}
	
return 0;
}

