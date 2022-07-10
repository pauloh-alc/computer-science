#include <stdio.h>
#include <stdlib.h>
#define TAM 10
//                                 tam 
int lista[TAM]; // [10][20][30][40][ ][ ][ ][ ][ ][ ]
int tam = 0;   //   0   1   2   3   4  5  6  7  8  9 
                    

void erros (char msg[])
{
  fprintf(stderr,"Erro: %s\n",msg);
  exit(1);
}

// Procedimento: reponsável por add elemento em um vetor
void inserir (int valor, int posicao)
{
  if (posicao >= 0 && posicao <= tam) {
      if (posicao == tam) {
        lista[posicao] = valor;
        tam += 1;
      }
      else {
        int i;
        for (i = tam; i > posicao; i--) {
            lista[i] = lista[i-1];
        }
        lista[posicao] = valor;
        tam += 1;
      }
  }
  else {
    erros ("posição fornecida inválida");
  };
}

// Procedimento: lista o vetor
void imprimir (void)
{
  int i;
  printf("Lista:\n");
  for (i = 0; i < tam; i++) {
    printf("%d\n",lista[i]);
  }
}

// Função: remove elemento de acordo com a posição fornecida pelo usuário
int remover (int posicao)
{
  int e_removido;
  e_removido = lista[posicao];
  int i;
  
  for (i = posicao; i < tam - 1; i++) {
      lista[i] = lista[i+1]; //lista[atual] = lista[próximo]
  }
  tam -= 1;

  return e_removido;
}

// Função: principal
int main (void) {
  
  inserir (10, 0);
  inserir (20, 1);
  inserir (30, 2);
  inserir (40, 3);

  imprimir ();
  printf("tamanho atual %d \n",tam);  
  int elemento = remover (0);
  printf("\nElemento removido foi: %d \n",elemento);
  
  printf("Lista Atualizada: \n");
  imprimir ();

  printf("tamamho atual %d \n",tam);
  return 0;
}
