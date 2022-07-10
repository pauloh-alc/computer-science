#include <stdio.h>
#include <math.h>

int main(){
	// 111
	int decimal, i, resto, binario, divisao;

	printf("Entre com um numero inteiro em binario >>");
	scanf("%d",&binario);
	
	i = 0;
	decimal = 0;
	
	while(binario > 0){
		resto = binario % 10;
		decimal = decimal + resto * pow(2,i);
		i++;
		binario = binario/10;
		printf("%d", binario);
	}
	printf("\n%d",decimal);
	printf("ddddddd%d\n",i);
return 0;
}
