#include <stdio.h>

int raiz(int numero){
	int i, raiz;
	
	for(i = 1; i < numero; i++){
		raiz = i * i;
		if(raiz == numero){
			printf("raiz = %d", i);
			return 0; // interrompe o programa aqui.
		}
	}
	printf("O numero digitado nao tem raiz quadrada inteira\n");
	return 1;
}

int main(){
	int n;
	
	printf("Entre com um numero para saber sua raiz quadrada >>>");
	scanf("%d",&n);
	
	raiz(n);
	
}
