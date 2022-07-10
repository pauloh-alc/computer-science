#include <stdio.h>

void tabuada(int l, int m){
	int i,
		j,
		result;
		
	for(i = 0; i <= l; i++){
		for(j = 1; j <= m; j++){
			result = i * j;
			printf("%d x %d = %d \n",i,j,result);
		}
		printf("\n");
	}
}

int main(){
	int limite,
		multiplos;
		
	printf("Forneca o valor Limite de numeros para a tabuada: ");
	scanf("%d",&limite);
	printf("Forneca o valor Limite de multiplos para a tabuada: ");
	scanf("%d",&multiplos);
	
	tabuada(limite, multiplos);
return 0;
}
