#include <stdio.h>
#include <math.h>
int main(){
	int numero1,
		numero2,
		opcao,
		numero,
		i,
		raiz;
	
	float raiz1,
		raiz2;
	printf("Entre com o primeiro numero: ");
	scanf("%d",&numero1);
	printf("Entre com o segundo numero: ");
	scanf("%d",&numero2);
	
	puts("1. Primeiro numero elevado ao segundo.");
	puts("2. Raiz quadrada de cada um dos numeros. ");
	puts("3. Raiz cubica de cada um dos numeros.");
	
	printf("Entre com a opcao desejada: ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1: 
			numero = 1;
			for(i = 1; i <= numero2; i++){
				numero = numero * numero1;
			}
			printf("Primeiro numero elevado ao segundo e: %d.\n",numero);
		break;
		
		case 2:
			for(i = 1; raiz != numero1; i++){
				raiz = i * i;
			}
			printf("Raiz quadrada de '%d' e: %d.\n",numero1,i);
			
			for(i = 1; raiz != numero2; i++){
				raiz = i * i;
			}
			printf("Raiz quadrada de '%d' e: %d.\n",numero2,i); 
		break;
		
		case 3: 
			raiz1 = pow(numero1, 1.0 / 3.0);
			raiz2 = pow(numero2, 1.0 / 3.0);
			
			printf("Raiz cubica do numero '%d' e: %f.\n",numero1, raiz1);
			printf("Raiz cubica do numero '%d' e: %f.\n",numero2, raiz2);	
		break;	
	}
return 0;
}
