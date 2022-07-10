#include <stdio.h>

int main(){
	
	int i, z;
	int x[3];
	int y[3];
	int soma[3];
	int produto[3];
	printf("Preenchendo vetor x[3]:\n");
	for(i = 0; i < 3; i++){
		printf("[%d] = ",i);
		scanf("%d",&x[i]);
	}
	printf("\nPreenchendo vetor y[3]:\n");
	for(i = 0; i < 3; i++){
		printf("[%d] = ",i);
		scanf("%d",&y[i]);
	}
	
	
	z = 1;
	printf("\n\nVetor 'soma' e 'produto' respectivamente\n");
	for(i = 0; i < 3; i++){
		
		if(z <= 3){
			soma[i] = x[i] + y[i];
			printf("[%d] = %d\n",i,soma[i]);
		}
		else{
			produto[i] = x[i] * y[i];
			printf("[%d] = %d\n",i,produto[i]);
		}
		if(z == 3){
			i = -1;
			printf("\n");
		} 
		z++;
	}
	
return 0;
}
