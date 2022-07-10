// Discente:  Paulo Henrique Diniz de Lima Alencar
// Matrícula: 494837

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

// var GLOBAIS:
int vetor[TAM];
int tam = 0;

// Procedimento: responsável por exibir mensagens de erros
void erros (char* mensagem)
{
  fprintf(stderr,"Erro: %s\n",mensagem);
  exit(1);
}

// Procedimento: responsável por add elementos no vetor
void adicionar (int valor, int posicao) {
  
  if (posicao >= 0 && posicao <= tam) {
      
    if (posicao == tam) {
      vetor[posicao] = valor;
      tam += 1;
    }
    else {
      int i;

      for (i = tam; i > posicao; i--) {
        vetor[i] = vetor[i-1];  
      }
      vetor[posicao] = valor; 
      tam += 1;
    }
  }
  else {
    erros ("você digitou uma posição inválida");
  }
}

// Procedimento: responsável por imprimir a lista feita com vetor
void imprimir (void)
{
  unsigned int i;
  printf("Lista:\n");
  for (i = 0; i < tam; i++) {
      printf("[%u]: %d\n",i,vetor[i]);
  }
}

// Função: responsável por remover o elemento na posicao escolhida pelo usuário
int remover (int posicao)
{
  int i, lixo;
  lixo = vetor[posicao];
  
  if (posicao >= 0 && posicao < tam) { 
    
    for (i = posicao; i < tam - 1; i++) {
        vetor[i] = vetor[i+1];
    }

  tam -= 1;
  }
  else {
      erros ("posição digitada para remoção é inválida");
  }
  return lixo;
}

// Função: principal
int main (void) {

  // Chamada de função - Adicionando elementos no vetor:
  adicionar (10,0);
  adicionar (20,1);
  adicionar (30,2);
  adicionar (40,3);
  
  // Chamada de função - exibindo lista
  imprimir ();
  printf("tamanho: %d\n",tam);

  // Chamada de função - removendo elemento da lista
  int removido = remover (0);
  printf("\nElemento removido foi: %d \n",removido);
  
  // Chamada de função - exibindo lista
  printf("Lista após remoção:\n");
  imprimir();
  printf("tamanho: %d\n",tam);
  
  return 0;
}
