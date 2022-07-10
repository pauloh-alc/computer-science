#include <stdio.h>

int main(){
	
	int codigo;
	float preco;
	
	printf("Entre com o 'preco de um produto': ");
	scanf("%f",&preco);
	printf("Entre agora com o 'codigo de origem' desse produto: ");
	scanf("%d",&codigo);
	
	if(codigo == 1) printf("Procedencia - Sul.\n");
	else if(codigo == 2) printf("Procedencia - Norte.\n");
	else if(codigo == 3) printf("Procedencia - Leste.\n");
	else if(codigo == 4) printf("Procedencia - Oeste.\n");
	else if(codigo == 5 || codigo == 4) printf("Procedencia - Nordeste.\n");
	else if(codigo == 7 || codigo == 8 || codigo == 9) printf("Procedencia - Sudeste.\n");
	else if(codigo >= 10 && codigo <= 20) printf("Procedencia - Centro-oeste.\n");
	else if(codigo >= 21 && codigo <= 30) printf("Procedencia - Nordeste.\n");
	
return 0;
}
