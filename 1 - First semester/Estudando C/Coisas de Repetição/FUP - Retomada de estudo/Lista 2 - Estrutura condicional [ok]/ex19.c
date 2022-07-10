#include <stdio.h>

int main(){
	
	int xa,
		xb,
		xc,
		ya,
		yb,
		yc;
		
	int altura,
		largura;
		
		
	printf("Entre com o ponto A (x,y) >>");
	scanf("%d%d",&xa,&ya);
	printf("Entre com o ponto B (x,y) >>");
	scanf("%d%d",&xb,&yb);
	printf("Entre com o ponto C (x,y) >>");
	scanf("%d%d",&xc,&yc);
	
	// Trabalhando no eixo x:
	
	if(xa >= xb && xb >= xc){
		largura = xa - xc;
	}
	else if(xa >= xc && xc >= xb){
		largura = xa - xb;
	}
	else if(xb >= xa && xa >= xc){
		largura = xb - xc;
	}
	else if(xb >= xc && xc >= xa){
		largura = xb - xa;
	}
	else if(xc >= xa && xa >= xb){
		largura = xc - xb;
	}
	else if(xc >= xb && xb >= xa){
		largura = xc - xa;
	}
	
	// Trabalhando do eixo y:
	
	if(ya >= yb && yb >= yc){
		altura = ya - yc;
	}
	else if(ya >= yc && yc >= yb){
		altura = ya - yb;
	}
	else if(yb >= ya && ya >= yc){
		altura = xb - xc;
	}
	else if(yb >= yc && yc >= ya){
		altura = yb - ya;
	}
	else if(yc >= ya && ya >= yb){
		altura = xc - xb;
	}
	else if(yc >= yb && yb >= ya){
		altura = yc - ya;
	}
	
	printf("Largura do retangulo circunscrito >> %d.\n",largura);
	printf("Altura do retangulo circunscrito >> %d.\n",altura);
	
return 0;
}
