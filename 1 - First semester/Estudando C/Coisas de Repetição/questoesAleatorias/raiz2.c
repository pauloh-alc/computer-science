#include <stdio.h>

int main(){
	int i, numero, raiz;
	
	scanf("%d",&numero);
	
	for(i = 1; i < numero; i++){
		raiz = i * i;
		if(raiz == numero){
			printf("Raiz de %d e %d.", numero, i);
		}
	}
}
