#include <stdio.h>

int main(){
	int i,j,tam,aux,k1,k2;
	int x[5];
	int y[5];
	int xy[10];
	
	printf("\nPreechimento do vetor x: \n\n");
	for(i = 0; i < 5; i++){
		printf("Posicao %d = [ ]: ",i);
		scanf("%d",&x[i]);
	}
	
	printf("\nPreechimento do vetor y:\n\n");
	for(i = 0; i < 5; i++){
		printf("Posicao %d = [ ]: ",i);
		scanf("%d",&y[i]);
	}
	tam = 5;
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam -1; j++){
			if(x[j] > x[j+1]){
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;	
			}
			if(y[j] > y[j+1]){
				aux = y[j];
				y[j] = y[j+1];
				y[j+1] = aux;	
			}	
		}
	}
	
	printf("\nVetor x ordenado: \n\n");
	for(i = 0; i < 5; i++){
		printf("[%d]",x[i]);
	}
	printf("\n\nVetor y ordenado: \n\n");
	for(i = 0; i < 5; i++){
		printf("[%d]",y[i]);
	}
	
	k1 = 0;
	k2 = 0;
	for(i = 0; i < 10; i++){
		if(i < 5){
			xy[i] = x[k1];
			k1++;	
		}
		else{
			xy[i] = y[k2];
			k2++;
		}
	}
	printf("\n\nVetor xy sem ordenacao: \n\n");
	for(i = 0; i < 10; i++){
		printf("[%d]",xy[i]);
	}
	tam = 10;
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam -1; j++){
			if(xy[j] > xy[j+1]){
				aux = xy[j];
				xy[j] = xy[j+1];
				xy[j+1] = aux;
			}
		}
	}
	
	printf("\n\nVetor xy ordenado: \n\n");
	for(i = 0; i < 10; i++){
		printf("[%d]",xy[i]);
	}
return 0;
}
