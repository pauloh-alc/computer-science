#include <stdio.h>

int main(){
	int horasExtras,horasFaltadas;
	float H;
	printf("Entre com o 'numero de horas extras': ");
	scanf("%d",&horasExtras);
	printf("Entre com o 'numero de horas faltadas': ");
	scanf("%d",&horasFaltadas);
	H = horasExtras - (2.0 / 3.0 * (horasFaltadas)); 
	if(H >= 2400) printf("PREMIO - R$ 500.\n");
	else if(H > 1800 && H < 2400) printf("PREMIO - R$ 400.\n");
	else if(H >= 1200 && H <= 1800) printf("PREMIO - R$ 300.\n");
	else if(H >= 600 && H < 1200) printf("PREMIO - R$ 200.\n");
	else printf("PREMIO - R$ 100.\n");
	printf("%f",H);
return 0;
}
