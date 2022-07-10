#include <stdio.h>

int main ()
{
	int v[] = {1,4,30,7,11,1,2,3,4,5,6,7,8,9,0,3,2,3,4,5,3,2,4,5,5};
	int *p;
	p = v; // o ponteiro agora guarda o endereço do primeiro
		   // elemento de v[0..4]. Ele guarda o endereço de v[0].
		   // poderia ser p = &v[0]
	
	/* 
	Portanto, p++ incrementa 1 inteiro ao endereço de memória atual de p.
	OBS: na maioria das máquinas 1 inteiro corresponde a 4 bytes, para saber 
	quanto vale em bytes algum tipo, utilize a função sizeof(tipo_dado).
	*/

	printf("Conteudo de (p) = %p \n",p);
	p++;
	printf("Depois de p++: \n");
	printf("Conteudo de (p) = %p \n",p); 
	
	/*
	Portanto, o conteúdo para onde o ponteiro p aponta vai ser incrementado
	em 1. Se antes v[1] = 4, após (*p)++; a vai passar a ser v[1] = 5.
	*/
	(*p)++;
	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*p);
	
	/*
	Com isso, o endereço atual de p passar a ser 1 inteiro
	maior, isto é, 4 bytes são adicionados ao atual endereço de 
	p. Se antes p guardava o endereço 900 agora vai deter o 
	endereço 904. Dessa forma, *(p++) vai mostrar o conteúdo
	presente no endereço 904. 
	*/
	*(p++);
	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*p);

	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*(p+10));
	
	return 0;
}
