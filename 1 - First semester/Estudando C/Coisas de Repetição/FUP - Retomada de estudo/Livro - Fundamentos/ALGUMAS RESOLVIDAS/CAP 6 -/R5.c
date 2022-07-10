#include <stdio.h>

int main(){
	int i, j, tam, repetiu,p,cont;
	int x[3];
	int y[3];
	int uniao[6];
	int aux[3];
	
	printf("Preenchimento de x[3]:\n");
	for(i = 0; i < 3; i++){
		printf("[%d] = ",i);
		scanf("%d",&x[i]);
	}
	printf("\n");
	printf("Preenchimento de y[3]:\n");
	for(i = 0; i < 3; i++){
		printf("[%d] = ",i);
		scanf("%d",&y[i]);
	}
	
	for(i = 0; i < 3; i++){
		aux[i] = x[i];
	}
	
	repetiu = 0;
	p = 0;
	tam = 3;
	for(i = 0; i < 3; i++){
		cont = 0;
		for(j = 0; j < tam; j++){
			if(aux[i] == x[j] && cont <= 1 && repetiu != 1){
				uniao[p] = x[i];
				cont++;
				repetiu = 1;
				p++;
			}
		}
	}
	
	
	
	
	tam = 3;
	for(i = 0; i < 3; i++){
		repetiu = 0;
		for(j = 0; j < tam; j++){
			if(y[i] == uniao[j]){
				repetiu = 1;
			}
		}
		if(repetiu != 1){
			uniao[tam] = y[i];
			tam++;
		} 
	}
		
	printf("\n");
	for(i = 0; i < tam; i++){
		printf("[%d] = %d.\n",i,uniao[i]);
	}
	
return 0;
}
