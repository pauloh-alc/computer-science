#include <stdio.h>

int main(){
	char nome[10];
	int i,j, nota;
	
	i = 1;
	j = 0;

	while(i < 4){
		j = 0;
		printf("Digite o nome do aluno %d >>", i);
		scanf("%s",&nome);
		
		while(j < 3){
			printf("Digite a nota do aluno %d >>", i);
			scanf("%d",&nota);
			j++;
		}
		
	i++;
	}
	
	return 0;
}
