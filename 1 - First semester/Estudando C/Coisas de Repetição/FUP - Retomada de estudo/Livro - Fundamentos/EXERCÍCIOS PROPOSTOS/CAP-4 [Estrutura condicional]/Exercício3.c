#include <stdio.h>

int main(){
	int numero1,
		numero2,
		menor;
	printf("Entre com um numero:");
	scanf("%d",&numero1);
	printf("Entre com um segundo numero: ");
	scanf("%d",&numero2);
	
	if(numero1 < numero2){
		menor = numero1;
	}
	else{
		menor = numero2;
	}
	
	printf("Menor numero digitad foi %d.\n",menor);

return 0;
}
