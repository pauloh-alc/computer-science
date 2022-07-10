// Exercício 1 - resolução
#include <stdio.h>

void menu ()
{
    puts("[a] Mostrar os n primeiros inteiros, a partir de 0, e o resultado da soma desses numeros.");
    puts("[b] Mostrar os n primeiros inteiros pares, a partir de 0, e a soma desses numeros pares.");
    puts("[c] Mostrar os n primeiros inteiros impares, a paritr de 0, e a soma dos numeros impares.");
    puts("[s] sair");
}

void a (int n)
{
  int i, soma = 0;

    for (i = 0; i <= n; i++) {
        printf("%d, ",i);
        soma += i;
    }
    printf("\nA soma desses números é: %d\n",soma);
}


void b (int n) 
{
  int i, soma_p = 0, num;

	for (i = 0; i < n; i++) {
		num = i * 2;
		printf("%d, ",num);
		soma_p += num;
	}
  
  printf("\nA soma desses números pares é: %d\n",soma_p);
}

void c (int n)
{
  int i, soma_i = 0, num;

  for (i = 0; i < n; i++) {
      num = 2 * i + 1;
      printf("%d,cl ",num);
      soma_i += num;
  }
  printf("\nA soma desses número impars é: %d\n",soma_i);
}

int main (void) {
    
    unsigned int n;
    char opcao;

    while (1) {
        menu();

        printf("Entre com uma opcao: ");
        scanf("%c",&opcao);
        __fpurge(stdin);
        
        if (opcao == 's') break;

        printf("Entre com um valor n > 0: ");
        scanf("%u",&n);
        __fpurge(stdin);

        switch (opcao) {
            case 'a': {
                a(n);      
            } break;
            case 'b': {
                b(n);
            } break;
            case 'c':{
                c(n);
            } break;
            default:
                printf("Erro: opção inválida !!\n");
        }
    }
    
    return 0;
}
