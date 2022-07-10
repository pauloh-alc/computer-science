#include <stdio.h>

int main(){
	int n, i, termo, anterior;
	printf("Entre com o valor de n >>");
	scanf("%d",&n);
	
	termo = 1;
	
	anterior = 0;
		for(i = 0; i < n; i++){
			printf("%d", termo);
			termo = termo + anterior;
			anterior = termo - anterior;
			
		}
	return 0;
}
