#include <stdio.h>

int main(){
	int x[10];
	int i,j,aux,tam;
	
	for(i = 0; i < 10; i++){
		printf("%d = ",i);
		scanf("%d",&x[i]);
	}
	
	tam = 10;
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam - 1; j++){
			if(x[j] < x[j+1]){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}		
	}
	
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("[%d] = %d.\n",i,x[i]);
	}

return 0;
}
