#include <stdio.h>

int main(){
	// Exercício resolvidos - 19
	int m, n, soma, numero;
	do{
		printf("Entre com um 'par' [m,n] respectivamente >>> ");
		scanf("%d%d",&m,&n);
		
		if(n > m){
			
			soma = 0;
			printf("[");
			for(numero = m; numero <= n; numero++){
				soma = soma + numero;
				printf("%d", numero);
				if(numero < n) printf(", ");
			}
			printf("]");
			printf("\nSoma [%d, %d] = %d.\n", m, n, soma);
			printf("\n");	
		}
	
	}while(m < n);
return 0;
}
