#include <stdio.h>

int eMultiplo(int r, int s){
	if(r % s){
		return 0;
	}
	else{
		return 1;
	}
}

void multiplos(int q, int x, int y){
	int natural,
		cont;
		
		natural = 0;
		cont = 0;
		
		printf("Os %d primeiros multiplos de %d ou %d sao: ",q,x,y);
		while(cont < q){
			if(eMultiplo(natural, x) || eMultiplo(natural, y)){
				printf("%d ",natural);
				cont = cont + 1;
			}
			natural = natural + 1;	
		}
}

int main(){
	int n,
		a,
		b;
		
		printf("Forneca a quantidade de multiplos e dois numeros geradores: ");
		scanf("%d%d%d",&n,&a,&b);
		
		multiplos(n,a,b);
		
return 0;
}
