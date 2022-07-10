#include <stdio.h>
#include <math.h>

int main(){
		float c,f;
		printf("Entre com a temperatura em Fahrenheit >>");
		scanf("%f", &f);
		
		c = (5 * f - 160)/9;
		printf("%f", c);
	
return 0;
}
