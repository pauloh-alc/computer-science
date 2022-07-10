#include <stdio.h>
#include <stdlib.h>

// Estrutura definida, do tipo Pessoa com os atributos / campos: peso, idade, altura
struct Pessoa {
  float peso;
  int idade;
  float altura;
};

int main (void) {
  
  // sizeof operador que devolver o tamanho em bytes que um determinado tipo precisa.
  printf("sizof(struct Pessoa) = %zu bytes.\n",sizeof(struct Pessoa));

  struct Pessoa *p = malloc (sizeof(struct Pessoa));
                   // [1byte][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ] = 12 bytes 
                   // end...  -  -  -  -  -  -  -  -  -  -  -  
                   // |   65.5       |    19     |    1.85   |    
                   // | 5001 | ... ... ...  ... ... ... ... ... 
  // p = 5001 Ex
  // ponteiro = detém um endereço de memória. p = ? ... ? = 5001

  // -> acessar 

  p -> peso = 65.5;
  p -> idade = 19;
  p -> altura = 1.85;
  
  printf("endereço do 1° byte que malloc alocou  = %p \n",p);
  printf("p -> peso   = %.2f \n", p->peso);
  printf("p -> idade  = %d   \n", p->idade);
  printf("p -> altura = %.2f \n", p->altura); 
  return 0;
}
