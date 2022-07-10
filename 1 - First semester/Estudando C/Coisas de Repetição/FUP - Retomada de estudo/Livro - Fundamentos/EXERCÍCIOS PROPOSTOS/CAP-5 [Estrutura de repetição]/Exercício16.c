#include <stdio.h>

int main(){
	
	int i, idade;
	float soma, media;
	
	i = 0;
	soma = 0;
	do{
		printf("Entre com a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		if(idade == 0) break;
		soma = soma + idade;
	i++;
	}while(!0);
	
	if(i > 0) media = soma / i;
	
	printf("A media das %d idades digitadas e: %.2f.\n",i,media);
	
return 0;
}
