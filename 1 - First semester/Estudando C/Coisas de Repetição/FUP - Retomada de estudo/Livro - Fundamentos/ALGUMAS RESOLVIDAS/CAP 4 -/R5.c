#include <stdio.h>

int main(){
	
	int num1,
		num2,
		num3,
		num4;
		
	printf("Entre com 3 numeros em ordem crescente, o numero 4 nao segue essa regra.\n");
	
	printf("Entre com os 3 numeros '[1-3]': ");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("Entre com o numero '4': ");
	scanf("%d",&num4);

	if(num4 > num3){
		printf("%d,%d,%d,%d", num4,num3,num2,num1);
	}
	else if(num4 > num2){
		printf("%d,%d,%d,%d", num3,num4,num2,num1);
	}
	else if(num4 > num1){
		printf("%d,%d,%d,%d", num3,num2,num4,num1);
	}
	else{
		printf("%d,%d,%d,%d", num3,num2,num1,num4);
	}
return 0;
}
