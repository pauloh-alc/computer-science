#include <stdio.h>

int main(){
	
	float porcentagem1, porcentagem5;
	int i, idade;
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	
	for(i = 1; i <= 8; i++){
		printf("Entre com a 'idade': ");
		scanf("%d",&idade);
		
		if(idade <= 15) cont1++;
		else if(idade >= 16 && idade <= 30) cont2++;
		else if(idade >= 31 && idade <= 45) cont3++;
		else if(idade >= 46 && idade <= 60) cont4++;
		else cont5++;
	}
	printf("Quantidade na faixa etaria 1 [%d].\n",cont1);
	printf("Quantidade na faixa etaria 2 [%d].\n",cont2);
	printf("Quantidade na faixa etaria 3 [%d].\n",cont3);
	printf("Quantidade na faixa etaria 4 [%d].\n",cont4);
	printf("Quantidade na faixa etaria 5 [%d].\n",cont5);
	
	porcentagem1 = (cont1 * 100) / 8.0;
	porcentagem5 = (cont5 * 100) / 8.0;
	
	printf("Porcentagem da primeira faixa etaria com relacao ao total - %.2f.\n",porcentagem1);
	printf("Porcentagem da primeira faixa etaria cm relacao ao total - %.2f.\n",porcentagem5);
	
return 0;
}
