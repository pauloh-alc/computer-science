#include <stdio.h>

int main ()
{	// Exibe os elementos do vetor vec [] = {4,9,13}
	// O processo ocorre por meio da alteração do endereço
	// que o ponteiro vec armazena. Isso permite o acesso ao
	// conteúdo presente nesses endereços.
	
	int vec[] = {4 ,   9,   13};
// endereço     900 | 904 | 908
	int i;
	int *vet;
	vet = &vec[0]; // poderia ser vet = vec
	// vet guarda o endereço de v[0].
	// vamos supor que o endereço de memória de v[0] seja 900 
	
	for (i = 0; i < 3; i++) {
		printf("%d,",*(vet+i));
	}
	// Memory:
	// 1int 4 bytes
	// i = 0 | 0 < 3 [verdade] | *(900 + 0int) = 900 | tela: 4,
	// i = 1 | 1 < 3 [verdade] | *(900 + 1int) = 904 | tela: 4,9,
	// i = 2 | 2 < 3 [verdade] | *(900 + 2int) = 908 | tela: 4,9,13,
	// i = 3 | 3 < 3 [falso] | sai do laço for. 
	
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%p\n",vet+i);
	}
	return 0;
}
