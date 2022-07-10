#include <stdio.h>

void eMultiplo(int n, int a, int b){
	int i,
		quant;
	
	i = 0;
	quant = 0;
	while(quant < n){
		if(!(i % a) || !(i % b)){
			quant++;
			printf("%d",i);
			if(quant < n) printf(", ");	
		}
		i++;	
	}
}

int main(){
	int a,
		b,
		n;
		
	printf("Entre com o valor de 'n': ");
	scanf("%d",&n);
	printf("Entre com os valores de A e B respectivamente: ");
	scanf("%d%d",&a,&b);
	
	eMultiplo(n,a,b);
return 0;
}
