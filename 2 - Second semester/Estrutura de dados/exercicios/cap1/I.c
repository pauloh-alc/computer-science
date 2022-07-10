// Exercício I. Resolução:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do tipo No, com os valores: nome, numero, codigo de segurança e senha
typedef struct no {
  char nome[50];        // 50 bytes
  long int numero;      // 8 bytes
  int codigo_seguranca; // 4 bytes
  int senha;            // 4 bytes
  struct no *Pro;       // 4 bytes
}No;                   // ---------
                       //  70 bytes
int main (void) {
  No *CARTAO = malloc (sizeof(No)); // Definindo um ponteiro de vai deter/guardar/armazenar o endereço do 1° byte alocado por malloc()
                                    // malloc() alocou possivelmente 70 bytes
  // copulando / setando valores no No
  strcpy(CARTAO -> nome, "Paulo Henrique");
  CARTAO -> numero = 5455605044239783;
  CARTAO -> codigo_seguranca = 785;
  CARTAO -> senha = 1523;
  
  // Saída de dados:
  printf("O nome da pessoa detentora do cartão é: %s \n",CARTAO -> nome);
  printf("O número do cartão de crédito é: %ld \n",CARTAO -> numero);
  // ... 
    
  return 0;
}
